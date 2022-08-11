#!/usr/bin/env python
import csv
import copy
import pandas as pd
import yaml
import numpy as np
from collections import defaultdict, deque
from os.path import dirname
from collections import defaultdict
KB_PATH='knowledge_base.yaml'
df = pd.read_csv('./infer/club_sandwich/club_sandwich_1800_predict.csv')
#df1 = df.astype(str)
#print(df1)
lista = []
listb = []
listc = []
listd = []
subgoal_list =[]

for i in range(1,561): #Task except
    raw = df.columns[i]
  #  lista.append(raw)
    #if df[raw] == 1:
    new = df[df[raw] == 1]
     # for all df.values == 1 contains empty dataframe

    if len(new.index) != 0: # if new dataframe is not empty, print
        #print(new, new['Task'].to_list())
        ing_name = raw.split('_') # colum = ingredient,state, relation list extract
        #print(raw)
        #print(new)
        #print(raw)
        #print(new.index.to_list())
        #print(new.index.to_list(), raw)
        if "Object" in raw:
            raw_obj = ing_name[2]
            for a in range(len(new['Task'])):
                task_obj = new['Task'].values[a]
                test1 = {'Object':raw_obj, 'Task': task_obj}
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


#print(listb)
#print(listc)
#print(listd)
#print(lista)
raw_data = listb
df1 = pd.DataFrame(lista).sort_values(by='Task', ascending = True).reset_index(drop=True)
df2 = pd.DataFrame(listb).sort_values(by='Task', ascending = True).reset_index(drop=True)
df3 = pd.DataFrame(listc).sort_values(by='Task', ascending = True).reset_index(drop=True)
df4 = pd.DataFrame(listd).sort_values(by='Task', ascending = True).reset_index(drop=True)
data = pd.concat([df1, df2, df3, df4], axis=1)
data_new = data.loc[:,~data.T.duplicated()]
subgoals = data_new.reindex(columns = ['Task','Object','State','Relation_on','Relation_in'])
print(subgoals)

# load object knowledge base
with open(KB_PATH) as f:  # Path
        KB = yaml.load(f, Loader=yaml.FullLoader)

subgoals_new = []
object_list=list(set(subgoals.Object.values.tolist()+subgoals.Relation_on.values.tolist()))
object_list.remove('<PAD>')
#object_list.extend(['cutting board', 'stove','plate'])
state_history ={} # key: object, value: {state:[], in:[], ground:[], underground:[] } # underground - object - ground
for obj in object_list:
    state_history[obj]= {'state':[], 'in':[], 'ground':[], 'underground':[] } # ingredient: one-to-one

subgoals_list = []
for ii in range(0,len(subgoals)):
    if [subgoals.Object[ii], subgoals.State[ii], subgoals.Relation_on[ii], subgoals.Relation_in[ii]] not in subgoals_list:
        subgoals_list.append([subgoals.Object[ii], subgoals.State[ii], subgoals.Relation_on[ii], subgoals.Relation_in[ii]])
        print(subgoals_list[-1])


# Check subgoals
for ii in range(0,len(subgoals)):
    flag_feasible= True
    if subgoals.Object[ii] == '<PAD>':
        flag_feasible = False
    if subgoals.State[ii] == 'none' and subgoals.Relation_in[ii]=='none' and subgoals.Relation_on[ii]=='none': # meaningless subgoal
        flag_feasible= False

    if flag_feasible == True:
        if subgoals.Object[ii] in state_history:
            # check whether  the state of the object is available
            if subgoals.State[ii] in []: #['sliced', 'fried','cooked','chopped']:
                if subgoals.State[ii] not in KB[subgoals.Object[ii]]['HasProperty']:
                    flag_feasible=False

            #check whether the state does not change
            if (subgoals.State[ii] in state_history[subgoals.Object[ii]]['state']) and (subgoals.Relation_in[ii] in state_history[subgoals.Object[ii]]['in']) \
                    and (subgoals.Relation_on in state_history[subgoals.Object[ii]]['underground']):
                flag_feasible= False

    if flag_feasible == True: # add subgoals and track the history
        subgoal_modified = [subgoals.Object[ii], subgoals.State[ii], subgoals.Relation_on[ii], subgoals.Relation_in[ii]]
        if subgoals.State[ii] not in state_history[subgoals.Object[ii]]['state']:
            state_history[subgoals.Object[ii]]['state'].append(subgoals.State[ii])
        if subgoals.Relation_in[ii] != 'none':
            state_history[subgoals.Object[ii]]['in']=[subgoals.Relation_in[ii]]
        if subgoals.Relation_on[ii] != 'none': # put ham and tomato on the bread: in fact the tomato should be on ham, not on bread
            state_history[subgoals.Object[ii]]['underground']=state_history[subgoals.Relation_on[ii]]['underground']+[subgoals.Relation_on[ii]]+ state_history[subgoals.Relation_on[ii]]['ground']
            state_history[subgoals.Relation_on[ii]]['ground'].extend([subgoals.Object[ii]]+state_history[subgoals.Object[ii]]['ground'])
            # the object is moved.
            #for obj in state_history[subgoals.Object[ii]]['underground']:
            #    idx =state_history[obj]['ground'].index(subgoals.Object[ii])
            #    state_history[obj]['ground']=state_history[obj]['ground'][:idx]


            # change the subgoal
            subgoal_modified[2] = state_history[subgoal_modified[0]]['underground'][-1]


        subgoals_new.append(subgoal_modified)


# subgoal correction
for ii in range(0,len(subgoals_new)):
    print(subgoals_new[ii])
for key in state_history.keys():
    print(key,state_history[key])
#for j in range(len(subgoals.index)):
 #   subgoal_diff = subgoals.iloc[j].to_dict()
  #  subgoal_list.append(subgoal_diff)
