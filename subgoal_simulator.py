# !/usr/bin/env python
import csv
import copy
import pandas as pd
import yaml
import numpy as np
from collections import defaultdict, deque
from os.path import dirname
from collections import defaultdict

def sigmoid(x):
    return 1 / (1 +np.exp(-x))

class Subgoal():
    def __init__(self,filenames): # filenames: list of filenames top1, top2, top3
        self.goals_DF=[] # dataframe
        self.goals_list = []
        self.num_top = len(filenames)

        for ii in range(0,self.num_top):
            self.goals_DF.append(self.__csv2DF__(filenames[ii]))
            self.goals_list = self.__subgoal_DF2list__(self.goals_DF[ii])

    def __csv2subgoals__(self,filepath, num_top):
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

        for ii in range(0,df.values.shape[0]):
            # object

            val_sigmoid = sigmoid(df.values[ii,obj_range[0]:obj_range[1]+1])
            idx_sorted = np.argsort(val_sigmoid)
            subgoal_obj = [obj_list[idx_sorted[-1-ii]] for ii in range(0,num_top)]
            subgoal_obj_val=[val_sigmoid[idx_sorted[-1-ii]] for ii in range(0,num_top)]

            # state
            th_state = 0.4
            val_sigmoid = sigmoid(df.values[ii, state_range[0]:state_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            subgoal_state = [state_list[idx_sorted[-1 - ii]] for ii in range(0, num_top) if
                           val_sigmoid[idx_sorted[-1 - ii]] > th_state]

            # relation_on
            th_relation = 0.4
            val_sigmoid = sigmoid(df.values[ii, relation_on_range[0]:relation_on_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            subgoal_relation_on = [relation_on_list[idx_sorted[-1 - ii]] for ii in range(0, num_top) if
                             val_sigmoid[idx_sorted[-1 - ii]] > th_relation]

            # relation_in
            th_relation = 0.4
            val_sigmoid = sigmoid(df.values[ii, relation_in_range[0]:relation_in_range[1] + 1])
            idx_sorted = np.argsort(val_sigmoid)
            subgoal_relation_in = [relation_in_list[idx_sorted[-1 - ii]] for ii in range(0, num_top) if
                             val_sigmoid[idx_sorted[-1 - ii]] > th_relation]

            print(subgoal_obj, subgoal_obj_val)
            print(subgoal_state)
            print(subgoal_relation_on)
            print(subgoal_relation_in)
            print('goal:', self.goals_list[ii])



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



if __name__ == '__main__':

    filepath1='./infer/club_sandwich/club_sandwich_1800_real_number.csv'
    filepath2='./infer/club_sandwich/club_sandwich_1800_predict.csv'

    subgoal = Subgoal([filepath2])
    subgoal.__csv2subgoals__(filepath1,5)
    print("end")

    # 검증할 사항:
    똑같은것,
    ingredient있는가,
    state transition



