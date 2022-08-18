# !/usr/bin/env python
#-*-coding:utf-8-*-#
import csv
import copy
import pandas as pd
import yaml
import numpy as np
from collections import defaultdict, deque
from os.path import dirname
from collections import defaultdict
import copy

def sigmoid(x):
    return 1 / (1 +np.exp(-x))


class SubgoalSimulator():
    def __init__(self,goal_path,file_info,kb_path,ing_map_path,tool_map_path,num_top,visible=True): # filenames: list of filenames top1, top2, top3
        self.goals_DF=[] # dataframe
        self.goals_list = [] # real_number.txt를 가공된 goal로 바꾸는건데
        self.num_top = num_top
        self.__read_info__(file_info)
        self.visible = visible

        with open(kb_path) as f:  # Read knowledge base
            self.KB = yaml.load(f, Loader=yaml.FullLoader)

        # ing_map_path: 요리의 아이덴티티가 되는 재료를 저장
        # e.g. tuna sandwich: [tuna, bread] (요리 set중에 tuna나 bread를 가진 것을 샌드위치라 판단
        with open(ing_map_path) as f:
            self.ing_map_key = yaml.load(f,Loader=yaml.FullLoader)

        # 없는 도구를 저절로 치환 e.g. muffin pan: pan => 레시피에 muffin map이 등장하면 pan으로 mapping
        with open(tool_map_path) as f:
            self.tool_map = yaml.load(f,Loader=yaml.FullLoader)

        self.__csv2subgoals__(goal_path,num_top) #self.goals_list만듦

    def get_network_output(self):
        subgoal.filter_samegoals() # 같은 sample 삭제
        # state history를 뽑고, goal correction을 수행
        sim_result = subgoal.subgoal_simulate(subgoal.goals_c)

        # history를 task planner가 쓸 수있는 형태로 변환
        subgoals_task = subgoal.states2subgoals(sim_result['states'])
        print("subgoals for task planner")
        for task in subgoals_task:
            print(task)

        #extract subgoals_diff and using ingredients
        subgoals_c = sim_result['subgoals']
        subgoals_diff = []
        using_ings = []
        ing_bottles = set()
        for ing_i in self.inputs:
            if '{}_bottle'.format(ing_i) in self.KB.keys():
                ing_bottles.add(ing_i)
        for ii in range(0, len(subgoals_c)):
            diff= {}
            ings= copy.deepcopy(ing_bottles)
            if subgoals_c[ii][1] != 'none':
                diff['{}_{}'.format(subgoals_c[ii][1],subgoals_c[ii][0])]=True
                ings.add(subgoals_c[ii][0])
            if subgoals_c[ii][2] != 'none':
                diff['{}_is_on'.format(subgoals_c[ii][0])]=subgoals_c[ii][2]
                ings.add(subgoals_c[ii][0])
                if subgoals_c[ii][2] != 'bowl': # why?
                    ings.add(subgoals_c[ii][2])
            if subgoals_c[ii][3] != 'none':
                diff['{}_is_in'.format(subgoals_c[ii][0])]=subgoals_c[ii][3]
                ings.add(subgoals_c[ii][0])
                if subgoals_c[ii][2] != 'bowl': # why?
                    ings.add(subgoals_c[ii][2])

            subgoals_diff.append(diff)
            using_ings.append([ings,{}])
        print(subgoals_diff)
        # add last ingredient of sandwich  는 뭐
        print("using_ings:",using_ings)
        return subgoals_task, using_ings, sim_result['ing_map'],subgoals_diff

    def __read_info__(self,filename):
        with open(filename) as f:
            line=f.readlines()
        ing_list = line[0][15:-1].split(', ')
        self.inputs = [w[1:-1] for w in ing_list]

    def __read_GT__(self,filepath):
        df = pd.read_csv(filepath)
        len_gt = len(df.columns)
        self.goals_gt = []
        state_list = ['chopped','cooked','diced','exist','fried','peeled','sliced','none']
        for ii in range(0, df.values.shape[0]):
            states=[]
            for jj in range(2,10):
                if df.values[ii,jj] == 1:
                    states.append(state_list[jj-2])

            self.goals_gt.append([self.obj_list[int(df.values[ii,1])],states,self.obj_list[int(df.values[ii,10])],
                                 self.obj_list[int(df.values[ii,11])]])
        print("GT")
        self.print_subgoal_list(self.goals_gt)

    def __csv2subgoals__(self,filepath, num_top): # extract subgoals from csv
        df = pd.read_csv(filepath)
        len_dfc=len(df.columns)
        obj_list = []
        obj_range=[len_dfc,0]
        state_list = []
        state_range=[len_dfc,0]
        relation_on_list  = []
        relation_on_range = [len_dfc,0]
        relation_in_list  = []
        relation_in_range = [len_dfc,0]

        # find names of data - csv를 읽기위한 준비
        for ii in range(0, len(df.columns)):
            split_text = df.columns[ii].split('_')
            if split_text[0] == 'Object':
                obj_range[0] = min(obj_range[0], ii) #column에서 몇번째 column이 obj에 해당되는건
                obj_range[1] = max(obj_range[1], ii)
                obj_list.append(split_text[2])
            elif split_text[0] == 'State':
                state_range[0] = min(state_range[0], ii)
                state_range[1] = max(state_range[1], ii)
                state_list.append(split_text[2])
            elif split_text[0] == 'Relation' and split_text[1] == 'on':
                relation_on_range[0] = min(relation_on_range[0], ii)
                relation_on_range[1] = max(relation_on_range[1], ii)
                relation_on_list.append(split_text[3])
            elif split_text[0] == 'Relation' and split_text[1] == 'in':
                relation_in_range[0] = min(relation_in_range[0], ii)
                relation_in_range[1] = max(relation_in_range[1], ii)
                relation_in_list.append(split_text[3])

        # tool mapping
        for tool in self.tool_map.keys():
            idx = obj_list.index(tool)
            obj_list[idx]=self.tool_map[tool]

            idx = relation_on_list.index(tool)
            relation_on_list[idx]=self.tool_map[tool]

            idx = relation_in_list.index(tool)
            relation_in_list[idx]=self.tool_map[tool]

        self.obj_list = obj_list

        # find num_top data
        self.goals=[] # dictionary형태로 정보가 많고
        self.goals_list = [] #list형태로 만들어진 goal
        for ii in range(0,df.values.shape[0]):
            # object
            val_sigmoid = sigmoid(df.values[ii,obj_range[0]:obj_range[1]+1])
            idx_sorted = np.argsort(val_sigmoid)
            objs = [obj_list[idx_sorted[-1-jj]] for jj in range(0,num_top)] #5개 object이름
            objs_val=[val_sigmoid[idx_sorted[-1-jj]] for jj in range(0,num_top)] # val_sigmoid값 5개 confidence를 결정

            # state
            th_state = 0.3
            val_sigmoid = sigmoid(df.values[ii, state_range[0]:state_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            states = [state_list[idx_sorted[-1 - jj]] for jj in range(0, num_top) if
                           val_sigmoid[idx_sorted[-1 - jj]] > th_state]
            if len(states)==0:
                states=['none']

            # relation_on
            th_relation = 0.4
            val_sigmoid = sigmoid(df.values[ii, relation_on_range[0]:relation_on_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            relation_on = [relation_on_list[idx_sorted[-1 - jj]] for jj in range(0, num_top) if
                             val_sigmoid[idx_sorted[-1 - jj]] > th_relation]
            if len(relation_on)==0:
                relation_on=['none']


            # relation_in
            th_relation = 0.4
            val_sigmoid = sigmoid(df.values[ii, relation_in_range[0]:relation_in_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            relation_in = [relation_in_list[idx_sorted[-1 - jj]] for jj in range(0, num_top) if
                             val_sigmoid[idx_sorted[-1 - jj]] > th_relation]

            if len(relation_in)==0:
                relation_in=['none']

            if objs[0]!='<PAD>':
                subgoal_unit = {'object':objs, 'object_val':objs_val,'state':states,
                                'relation_on':copy.deepcopy(relation_on), 'relation_in':copy.deepcopy(relation_in),
                                'top1':[objs[0],states[0],relation_on[0],relation_in[0]],
                                'goal':[objs[0],states[0],relation_on[0],relation_in[0]]} #goal은 없어도 될듯
                #print(subgoal_unit['top1'])
                #print('goal:', self.goals_list[ii])

                self.goals.append(copy.deepcopy(subgoal_unit))
                self.goals_list.append(copy.deepcopy(subgoal_unit['top1']))

        #print('subgoal- original')
        #self.print_subgoal_list(self.goals_list)

    def filter_samegoals(self):
        self.goals_c=copy.deepcopy(self.goals_list)# corrected goals
        self.idx_goal_ranking= [0] * len(self.goals) # ranking of selected goals

        for nn in range(0,self.num_top):
            for ii in range(0,len(self.goals_c)):
                # remove nonexist objects

                if self.goals_c[ii][0] not in self.inputs: #없는 object가 등장한 경우
                    next_goal, cur_rank = self.sample_valid_goal(self.goals[ii], self.goals_c[ii], self.idx_goal_ranking[ii])
                    self.goals_c[ii] = copy.deepcopy(next_goal)
                    self.idx_goal_ranking[ii] = cur_rank
                # TODO: e
                if self.goals_c[ii][2] not in self.inputs+['none']\
                    or self.goals_c[ii][3] not in self.inputs+['none']:
                    self.goals_c[ii][0]='skip'

                # Change subgoals if there are multiple same goals
                num_same = self.goals_c.count(self.goals_c[ii])
                if num_same >1 and self.goals_c[ii][0] !='skip':
                    # find all indices
                    same_idxs = [] #몇번째 task가 겹치는지 index를 뽑고
                    probs = [] # 각 subgoal의 confidence
                    for jj in range(0,len(self.goals_c)):
                        if self.goals_c[ii] == self.goals_c[jj]:
                            same_idxs.append(jj)
                            probs.append(self.goals[jj]['object_val'][self.idx_goal_ranking[jj]])

                    # change subgoals- try top (n+1)
                    idx_argsort = np.flip(np.argsort(probs))
                    for kk in idx_argsort[1:]:
                        jj = same_idxs[kk]
                        next_goal, cur_rank = self.sample_valid_goal(self.goals[jj], self.goals_c[jj],
                                                                     self.idx_goal_ranking[jj])
                        self.goals_c[jj] = copy.deepcopy(next_goal)
                        self.idx_goal_ranking[jj] = cur_rank

        # print
        print("subgoals: original vs corrected")
        for ii in range(0,len(self.goals_list)):
            print('{}" '.format(ii),self.goals_list[ii], self.goals_c[ii])

    def sample_valid_goal(self, goal_info, cur_goal, curr_rank): # sample valid goals considering objlist and KB
        flag_done = True
        next_goal = copy.deepcopy(cur_goal)
        while flag_done:
            curr_rank = curr_rank + 1
            if curr_rank >= self.num_top:
                next_goal[0] = 'skip'
                flag_done= False
            else:
                new_obj = goal_info['object'][curr_rank]
                if new_obj in self.inputs:
                    if cur_goal[1] in []:  # ['sliced', 'peeled','diced','chopped']: # check the property
                        if cur_goal[1] in self.KB[new_obj]['HasProperty']:
                            next_goal[0] = new_obj
                            flag_done = False
                    else:
                        next_goal[0] = new_obj
                        flag_done = False
        return next_goal, curr_rank



    def subgoal_simulate(self, goals_list):
        states_history = []
        states = {}  # key: object, value: {state:[], in:[], ground:[], underground:[] } # underground - object - ground
        subgoals_new = []
        new_ing = {} # save the new ingredient:e.g. {sandwich: [ham, bread, ...], }
        # obj_none: 처음에 없는데 등장할 재료
        obj_none = [goals_list[ii][0] for ii in range(0,len(goals_list)) if goals_list[ii][1]=='exist']
        for obj in self.inputs:
            if obj != '<PAD>':
                if obj in obj_none:
                    states[obj] = {'state': ['none'], 'in': [],'contains': [], 'ground': [], 'underground': []}  # ingredient: one-to-one
                else:
                    states[obj] = {'state': ['exist'], 'in': [], 'contains': [], 'ground': [],
                                   'underground': []}  # ingredient: one-to-one

        for ii in range(0, len(goals_list)):
            flag_feasible = True

            if goals_list[ii][0] == '<PAD>' or goals_list[ii][0] == 'skip':
                flag_feasible = False
            if goals_list[ii][1]== 'none' and goals_list[ii][2] == 'none' \
                and goals_list[ii][3] == 'none':  # meaningless subgoal
                flag_feasible = False

            # check whether the state does not change
            if flag_feasible:
                obj_cur = goals_list[ii][0]
                if (goals_list[ii][1] in states[obj_cur]['state']) and (
                            goals_list[ii][3] in states[obj_cur]['in']) \
                            and (goals_list[ii][2] in states[obj_cur]['underground']): # on
                    flag_feasible = False

            if flag_feasible:  # add subgoals and track the history
                subgoal_modified = copy.deepcopy(goals_list[ii])

                if goals_list[ii][1] != 'none' and goals_list[ii][1] not in states[obj_cur]['state']: # check state
                    states[obj_cur]['state'].append(goals_list[ii][1])
                    if 'none' in states[obj_cur]['state']:
                        states[obj_cur]['state'].remove('none')

                if goals_list[ii][1] == 'exist':

                    if ii ==0:
                        new_ing[obj_cur]=[obj_cur]
                        print('map:',obj_cur,cook_set_new)
                        states[obj_cur]['state']=['exist']
                    else:
                        cook_set_on, cook_set_contains = self.states2set(states_history[-1], visible=False)
                        flag_total = False
                        for cook_set in cook_set_on+list(cook_set_contains.values()):

                            flag, cook_set_new = self.check_ing_mapping(self.ing_map_key[obj_cur],cook_set)
                            if flag:
                                flag_total = flag
                                new_ing[obj_cur]=copy.deepcopy(cook_set_new)
                                print('map:',obj_cur,cook_set_new)
                                # update states
                                # TODO: # replace all the object
                                for key in states.keys():
                                    if key in cook_set_new:
                                        states[key]= {'state': ['none'], 'in': [],'contains': [], 'ground': [], 'underground': []}
                                    else:
                                        for key_check in ['ground','underground','contains']:
                                            #if set(cook_set_new).issubset(set(states[key][key_check])): # replace ingredients
                                            if len(set(cook_set_new) & set(states[key][key_check]))>0:
                                                new_context = []
                                                for g in states[key][key_check]:
                                                    if g in cook_set_new:
                                                        if obj_cur not in new_context:
                                                            new_context.append(obj_cur)
                                                    else:
                                                        new_context.append(g)
                                                states[key][key_check]=copy.deepcopy(new_context)
                                                if key_check == 'contains':
                                                    states[obj_cur]['in']=[key]

                        if not flag_total:
                            new_ing[obj_cur] = [obj_cur]
                            print('map_else:',obj_cur,cook_set_new)
                            #states[obj_cur]['state'].remove('none')
                            states[obj_cur]['state']=['exist']

                if goals_list[ii][2] != 'none':      # relation_on
                    #remove the previous underground
                    for obj2 in states[obj_cur]['underground']:
                        states[obj2]['ground'].remove(obj_cur)
                    states[obj_cur]['underground'] = states[goals_list[ii][2]]['underground'] + [goals_list[ii][2]] \
                                                     + states[goals_list[ii][2]]['ground']
                    new_set = copy.deepcopy(states[obj_cur]['underground']+[obj_cur]+states[obj_cur]['ground'])
                    for jj in range(0,len(new_set)): # sync, underground, ground
                        states[new_set[jj]]['ground']=copy.deepcopy(new_set[jj+1:])
                        states[new_set[jj]]['underground']=copy.deepcopy(new_set[0:jj])
                    if states[obj_cur]['in'] != []: # the object is not in [?] anymore
                        states[states[obj_cur]['in'][0]]['contains'].remove(obj_cur)
                        states[obj_cur]['in']=[]

                    # change the subgoal
                    subgoal_modified[2] = states[subgoal_modified[0]]['underground'][-1]

                if goals_list[ii][3] != 'none': #relation_in
                    if states[obj_cur]['in'] !=[]: # if the object is already in something
                        states[states[obj_cur]['in'][0]]['contains'].remove(obj_cur)
                    states[obj_cur]['in'] = [goals_list[ii][3]]
                    states[goals_list[ii][3]]['contains'].extend([obj_cur]+states[obj_cur]['ground']) # put the object in the container
                    # if the object is already on something
                    for obj2 in states[obj_cur]['underground']:
                        states[obj2]['ground'].remove(obj_cur)
                    states[obj_cur]['underground']=[]

                states_history.append(copy.deepcopy(states))
                subgoals_new.append(subgoal_modified)
                if self.visible:
                    cook_set_on, cook_set_contains = self.states2set(states, visible=False)
                    print('cook set {}: '.format(ii), cook_set_on,cook_set_contains)

        # states to group
        cook_set_on, cook_set_contains = self.states2set(states,visible=True)
        sim_result = {'subgoals':subgoals_new, 'states':states_history,
                      'set_on':cook_set_on, 'set_contains':cook_set_contains,
                      'ing_map':new_ing}
        return sim_result

    def states2set(self,states,visible=False): #현재 state를 grouping한다.
        # states to group
        cook_set_contains = {}
        cook_set_on = []
        for obj in states.keys():
            if states[obj]['in'] != []:
                if states[obj]['in'][0] in cook_set_contains.keys():
                    cook_set_contains[states[obj]['in'][0]].append(obj)
                else:
                    cook_set_contains[states[obj]['in'][0]] = [obj]

            if states[obj]['ground'] != [] or states[obj]['underground'] != []:
                flag_exist = False
                for jj in range(0, len(cook_set_on)):
                    if obj in cook_set_on[jj]:
                        cook_set_on[jj] = list(
                            set(cook_set_on[jj] + states[obj]['ground'] + states[obj]['underground']))
                        flag_exist = True
                if not flag_exist:
                    cook_set_on.append(states[obj]['ground'] + [obj] + states[obj]['underground'])

        # cook_set_on과 cook_set_contains에 overlap이 있을 때 처리
        for set_on in cook_set_on:
            for key_container in cook_set_contains:
                if len(set(set_on) & set(cook_set_contains[key_container]))>0:
                    cook_set_contains[key_container] = list(set(set_on+ cook_set_contains[key_container]))

                    cook_set_on.remove(set_on)
        if visible:
            print('on: ', cook_set_on)
            print('contains: ', cook_set_contains)
        return cook_set_on, cook_set_contains

    def check_ing_mapping(self,ing_map, cook_set):
        # check whether essential ingredient is included in a cook_set
        cook_set_return = []
        flag_return = False
        for key_ing in ing_map:
            cook_set_new = []
            flag = False
            for ing in cook_set:
                if ing in self.KB.keys():
                    if 'ingredient' in self.KB[ing]['isA']:
                        cook_set_new.append(ing)
                else:
                    cook_set_new.append(ing)
                if key_ing in ing:
                    flag= True
            if flag:
                flag_return = True
                cook_set_return = cook_set_new
        return flag_return, cook_set_return


    def states2subgoals(self, states_history): # translate state in the format of the subgoal
        #Todo:Tool, exist 무시
        subgoals_task = []
        for ii in range(0,len(states_history)):
            states = states_history[ii]
            subgoal = {}
            for obj, s in states.items():
                if 'ingredient' not in ['ingredient']: #TODO: knowledge base 만들어진 이후 교체 self.KB[obj]:
                    for ss in s['state']:
                        if ss!='none':
                            subgoal[ss+'_'+obj]=True
                        else:
                            subgoal['exist_'+obj]=False
                if len(s['underground'])>0:
                    subgoal[obj+'_is_on']=s['underground'][-1]
                if len(s['in']) > 0:
                    subgoal[obj+'_is_in']=s['in'][0]
            subgoals_task.append(subgoal)
        return subgoals_task

    def goallist2goaldiff(self,goal_list):
        print(goal_list)




    def __csv2DF__(self,filepath):
        df = pd.read_csv(filepath)
        # df1 = df.astype(str)
        # print(df1)
        lista = []
        listb = []
        listc = []
        listd = []

        for i in range(1, 561):  # Task except
            raw = df.columns[i]
            #  lista.append(raw)
            # if df[raw] == 1:
            new = df[df[raw] == 1]
            # for all df.values == 1 contains empty dataframe

            if len(new.index) != 0:  # if new dataframe is not empty, print
                # print(new, new['Task'].to_list())
                ing_name = raw.split('_')  # colum = ingredient,state, relation list extract

                if "Object" in raw:
                    raw_obj = ing_name[2]
                    for a in range(len(new['Task'])):
                        task_obj = new['Task'].values[a]
                        test1 = {'Object': raw_obj, 'Task': task_obj}
                        lista.append(test1)

                elif "State" in raw:
                    raw_state = ing_name[2]
                    for b in range(len(new['Task'])):
                        task_state = new['Task'].values[b]
                        test2 = {'State': raw_state, 'Task': task_state}
                        listb.append(test2)

                elif "Relation_on" in raw:
                    raw_relon = ing_name[3]
                    for c in range(len(new['Task'])):
                        task_relon = new['Task'].values[c]
                        test3 = {'Relation_on': raw_relon, 'Task': task_relon}
                        listc.append(test3)

                elif "Relation_in" in raw:
                    raw_relin = ing_name[3]
                    for d in range(len(new['Task'])):
                        task_relin = new['Task'].values[d]
                        test4 = {'Relation_in': raw_relin, 'Task': task_relin}
                        listd.append(test4)

        df1 = pd.DataFrame(lista).sort_values(by='Task', ascending=True).reset_index(drop=True)
        df2 = pd.DataFrame(listb).sort_values(by='Task', ascending=True).reset_index(drop=True)
        df3 = pd.DataFrame(listc).sort_values(by='Task', ascending=True).reset_index(drop=True)
        df4 = pd.DataFrame(listd).sort_values(by='Task', ascending=True).reset_index(drop=True)
        data = pd.concat([df1, df2, df3, df4], axis=1)
        data_new = data.loc[:, ~data.T.duplicated()]
        subgoals = data_new.reindex(columns=['Task', 'Object', 'State', 'Relation_on', 'Relation_in'])
        #print(subgoals)
        return subgoals

    def __subgoal_DF2list__(self,subgoals):
        subgoal_list = []

        for ii in range(0, len(subgoals)):
            if subgoals.Object[ii] !='<PAD>':
                subgoal_list.append([[subgoals.Object[ii], subgoals.State[ii], subgoals.Relation_on[ii], subgoals.Relation_in[ii]]])
        return subgoal_list

    def print_subgoal_list(self,subgoal_list):
        for l in subgoal_list:
            print(l)


if __name__ == '__main__':

    path_common = './infer_1049/club_sandwich/club_sandwich_1800_'
    real_number_path=path_common+'real_number.csv'
    file_info=path_common+'info.txt'
    gt_path = path_common+'label.csv'
    kb_path = 'knowledge_base.yaml'
    ing_map_path = 'Ingredient_mapping.yaml'
    tool_map_path = 'tool_mapping.yaml'
    subgoal = SubgoalSimulator(real_number_path,file_info,kb_path,ing_map_path,tool_map_path,5)
    goals, using_ings, new_objs, goal_diffs = subgoal.get_network_output()

    #subgoal.filter_samegoals()
    #print("GT")
    subgoal.__read_GT__(gt_path)

    # print:
    #subgoals_c, states_history_c, cook_set_on_c, cook_set_contains_c,new_ing_c = subgoal.subgoal_simulator(subgoal.goals_c)
    subgoal.__read_GT__(gt_path)
    simresults_gt = subgoal.subgoal_simulate(subgoal.goals_gt)


    #subgoals_task = subgoal.states2subgoals(states_history_c)
    #print("subgoals for task planner")
    #for task in subgoals_task:
    #    print(task)
#    subgoal.__csv2subgoals__(filepath1,5)
    print("end")





