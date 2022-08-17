# !/usr/bin/env python
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


class Subgoal():
    def __init__(self,goal_path,kb_path,num_top): # filenames: list of filenames top1, top2, top3
        self.goals_DF=[] # dataframe
        self.goals_list = []
        self.num_top = num_top
        self.__csv2subgoals__(goal_path,num_top)
        self.new_obj_essential = {'club_sandwich': ['bread', 'bread_crumb'], 'tuna spread': ['tuna']}

        with open(kb_path) as f:  # Read knowledge base
            self.KB = yaml.load(f, Loader=yaml.FullLoader)

        # for ii in range(0,self.num_top):
        #     self.goals_DF.append(self.__csv2DF__(filenames[ii]))
        #     self.goals_list = self.__subgoal_DF2list__(self.goals_DF[ii])

    def __read_info__(self,filename):
        with open(filename) as f:
            line=f.readlines()
        ing_list = line[0][15:-1].split(', ')
        self.inputs = [w[1:-1] for w in ing_list]

    def __read_GT__(self,filepath):
        df = pd.read_csv(filepath)
        len_gt = len(df.columns)
        self.goal_gt = []
        state_list = ['chopped','cooked','diced','exist','fried','peeled','sliced','none']
        for ii in range(0, df.values.shape[0]):
            states=[]
            for jj in range(2,10):
                if df.values[ii,jj] == 1:
                    states.append(state_list[jj-2])

            self.goal_gt.append([self.obj_list[int(df.values[ii,1])],states,self.obj_list[int(df.values[ii,10])],
                                 self.obj_list[int(df.values[ii,11])]])

        self.print_subgoal_list(self.goal_gt)


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

        # find names of data
        for ii in range(0, len(df.columns)):
            split_text = df.columns[ii].split('_')
            if split_text[0] == 'Object':
                obj_range[0] = min(obj_range[0], ii)
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

        self.obj_list = obj_list
        # find num_top data
        self.goals=[]
        self.goals_list = []
        for ii in range(0,df.values.shape[0]):
            # object
            val_sigmoid = sigmoid(df.values[ii,obj_range[0]:obj_range[1]+1])
            idx_sorted = np.argsort(val_sigmoid)
            objs = [obj_list[idx_sorted[-1-ii]] for ii in range(0,num_top)]
            objs_val=[val_sigmoid[idx_sorted[-1-ii]] for ii in range(0,num_top)]

            # state
            th_state = 0.3
            val_sigmoid = sigmoid(df.values[ii, state_range[0]:state_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            states = [state_list[idx_sorted[-1 - ii]] for ii in range(0, num_top) if
                           val_sigmoid[idx_sorted[-1 - ii]] > th_state]
            if len(states)==0:
                states=['none']

            # relation_on
            th_relation = 0.3
            val_sigmoid = sigmoid(df.values[ii, relation_on_range[0]:relation_on_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            relation_on = [relation_on_list[idx_sorted[-1 - ii]] for ii in range(0, num_top) if
                             val_sigmoid[idx_sorted[-1 - ii]] > th_relation]
            if len(relation_on)==0:
                relation_on=['none']


            # relation_in
            th_relation = 0.3
            val_sigmoid = sigmoid(df.values[ii, relation_in_range[0]:relation_in_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            relation_in = [relation_in_list[idx_sorted[-1 - ii]] for ii in range(0, num_top) if
                             val_sigmoid[idx_sorted[-1 - ii]] > th_relation]

            if len(relation_in)==0:
                relation_in=['none']

            if objs[0]!='<PAD>':
                subgoal_unit = {'object':objs, 'object_val':objs_val,'state':states,
                                'relation_on':relation_on, 'relation_in':relation_in,
                                'top1':[objs[0],states[0],relation_on[0],relation_in[0]],
                                'goal':[objs[0],states[0],relation_on[0],relation_in[0]]}
                #print(subgoal_unit['top1'])
                #print('goal:', self.goals_list[ii])

                self.goals.append(subgoal_unit)
                self.goals_list.append(subgoal_unit['top1'].copy())

                self.print_subgoal_list(self.goals_list)

    def filter_samegoals(self):
        self.goals_c=copy.deepcopy(self.goals_list)# corrected goals
        self.idx_goal_ranking= [0] * len(self.goals) # ranking of selected goals

        for nn in range(0,self.num_top):
            for ii in range(0,len(self.goals_c)):
                # remove nonexist objects

                if self.goals_c[ii][0] not in self.inputs:
                    next_goal, cur_rank = self.sample_valid_goal(self.goals[ii], self.goals_c[ii], self.idx_goal_ranking[ii])
                    self.goals_c[ii] = copy.deepcopy(next_goal)
                    self.idx_goal_ranking[ii] = cur_rank

                if self.goals_c[ii][2] not in self.obj_list\
                    or self.goals_c[ii][3] not in self.obj_list:
                    self.goals_c[ii][0]='skip'

                # Change subgoals if there are multiple same goals
                num_same = self.goals_c.count(self.goals_c[ii])
                if num_same >1 and self.goals_c[ii][0] !='skip':
                    # find all indices
                    same_idxs = []
                    probs = []
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
                        # sample new one
                        #
                        # self.idx_goal_ranking[jj] = self.idx_goal_ranking[jj] + 1
                        # while self.goals[jj]['object'][self.idx_goal_ranking[jj]] not in self.inputs\
                        #         and self.idx_goal_ranking[jj]<self.num_top:
                        #     self.idx_goal_ranking[jj] = self.idx_goal_ranking[jj] + 1
                        #
                        # if self.idx_goal_ranking[jj] == self.num_top:
                        #     self.goal_c[jj][0]='skip'
                        # else:
                        #     self.goals_c[jj][0]=self.goals[jj]['object'][self.idx_goal_ranking[jj]]
                        #     self.goals[jj]['goal']=self.goals_c[jj]
        # print
        for ii in range(0,len(self.goals_list)):
            print(ii,':',self.goals_list[ii], self.goals_c[ii])

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
                        if cur_goal[1] in KB[new_obj]['HasProperty']:
                            next_goal[0] = new_obj
                            flag_done = False
                    else:
                        next_goal[0] = new_obj
                        flag_done = False
        return next_goal, curr_rank



    def subgoal_simulator(self, goals_list):
        states_history = []
        states = {}  # key: object, value: {state:[], in:[], ground:[], underground:[] } # underground - object - ground
        subgoals_new = []
        new_ing = {} # save the new ingredient

        for obj in self.inputs:
            if obj != '<PAD>':
                states[obj] = {'state': [], 'in': [],'contains': [], 'ground': [], 'underground': []}  # ingredient: one-to-one

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

                if goals_list[ii][1] not in states[obj_cur]['state']: # check state
                    states[obj_cur]['state'].append(goals_list[ii][1])

                if goals_list[ii][1] == 'exist':
                    new_ing[obj_cur]=[]

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


                states_history.append(copy.deepcopy(states))
                subgoals_new.append(subgoal_modified)

                # exist가 등장하면 새로운 obj로 교체.


        #print('subgoal_simulator')
        #self.print_subgoal_list(subgoals_new)

        # states to group
        cook_set_on, cook_set_contains = self.states2set(states)


        return subgoals_new, cook_set_on, cook_set_contains

    def states2set(self,states):
        # states to group
        cook_set_contains = {}
        cook_set_on = []
        #cook_set_vertex = []
        for obj in states.keys():
            if states[obj]['in'] != []:
                if states[obj]['in'][0] in cook_set_contains.keys():
                    cook_set_contains[states[obj]['in'][0]].append(obj)
                else:
                    cook_set_contains[states[obj]['in'][0]] = [obj]

            if states[obj]['ground'] != [] or states[obj]['underground'] != []:
                flag_exist = False
                for ii in range(0, len(cook_set_on)):
                    if obj in cook_set_on[ii]:
                        cook_set_on[ii] = list(
                            set(cook_set_on[ii] + states[obj]['ground'] + states[obj]['underground']))
                        flag_exist = True
                if not flag_exist:
                    cook_set_on.append(states[obj]['ground'] + [obj] + states[obj]['underground'])

        print('on: ', cook_set_on)
        print('contains: ', cook_set_contains)
        return cook_set_on, cook_set_contains

    def state2subgoal_task(self, state_history, subgoals_new): # translate state in the format of the subgoal
        state_history = []



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
        print(subgoals)
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

    path_common = './infer_1049/tuna_sandwich/tuna_sandwich_1900_'
    filepath1=path_common+'real_number.csv'
    file_info=path_common+'info.txt'
    gt_path = path_common+'label.csv'
    kb_path = KB_PATH='knowledge_base.yaml'

    subgoal = Subgoal(filepath1,kb_path,5)
    subgoal.__read_info__(file_info)
    subgoal.filter_samegoals()
    print("GT")
    subgoal.__read_GT__(gt_path)

    subgoal.subgoal_simulator(subgoal.goals_c)
    subgoal.subgoal_simulator(subgoal.goal_gt)

#    subgoal.__csv2subgoals__(filepath1,5)
    print("end")

    # 검증할 사항:
    #똑같은것,
    #ingredient있는가,
    #state transition
    #object 묶음 만들기



