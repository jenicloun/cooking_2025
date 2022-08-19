# !/usr/bin/env python
#-*-coding:utf-8-*-#
import csv
import copy
import pandas as pd
import yaml
import numpy as np
import os
import glob
from collections import defaultdict, deque
#from os.path import dirname
from collections import defaultdict
import copy
from SubgoalSimulator import SubgoalSimulator, sigmoid

# -- 공통 경로 세팅 -- #
path_kb = './yaml/total.yaml' # Knowledge Base
# ing_map_path: 요리의 아이덴티티가 되는 재료-
# e.g. tuna sandwich: [tuna, bread] (요리 set중에 tuna나 bread를 가진 것을 샌드위치라 판단
path_ing_map = 'Ingredient_mapping.yaml'
path_tool_map = 'tool_mapping.yaml' # 없는 도구를 저절로 치환 e.g. muffin pan: pan => 레시피에 muffin map이 등장하면 pan으로 자동 치환

# 경로에 있는 모든 파일을 부름
path_infer = './infer_1049'
recipe_names = os.listdir(path_infer) # path infer의 모든 하위 폴더를 부름
for i_recipe in range(0,len(recipe_names)): # 모든 recipe 파일에 대해 반복 작업
    # -- 경로 자동 세팅 -- #
    recipe = recipe_names[i_recipe]
    path_recipe = '{}/{}/{}_'.format(path_infer,recipe,recipe)
    files = glob.glob('{}*info.txt'.format(path_recipe))
    for itest in range(0,len(files)):
        path_common = files[itest][0:-8]

        path_result=path_common+'real_number.csv' # result
        path_info=path_common+'info.txt' # inputs of networks
        path_gt = path_common+'label.csv' # Ground Truth

        #SubgoalSimulator declare
        print(recipe)
        subgoalsim = SubgoalSimulator(path_result,path_info,path_kb,path_ing_map,path_tool_map,5,visible=True)
        subgoalsim.filter_samegoals()  # 같은 sample 삭제
        # state history를 뽑고, goal correction을 수행 => simulation 결과를 얻음
        sim_result_c= subgoalsim.subgoal_simulate(subgoalsim.goals_c)

        #subgoalsim.__read_GT__(path_gt)
        #sim_result_gt = subgoalsim.subgoal_simulate(subgoalsim.goals_gt)

        print(" ")

#TODO: saran wrap greek salad recipe에서 처리 고민.
# dalgona coffee: 문맥상 mixing bowl, drinkig glass 를 한곳에 넣어야하는걸 어떻게 알지? GT에 합치는게 빠져있나?
# oven bowl등 에 cutting board가 들어가는 문제, garlic bread cheesy_garlic bread,
# EPIC-P12_01-salad문제, garlic_bread-student-mealz
# 그냥 어려운 것 seasoned_green_beans: aluminium foil 두번째 foil은 다른 aluminium foil이다.