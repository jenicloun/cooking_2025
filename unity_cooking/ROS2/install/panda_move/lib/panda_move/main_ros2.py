#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import copy
import csv
import yaml
import datetime
import time
from collections import defaultdict
from os.path import dirname

import rclpy
from rclpy.node import Node

from task_planning.searcher import AStarSearcher
from task_planning.planner import ForwardPlanner
from task_planning.domain import *
from task_planning.problem import StripsProblem
from object_level_motion import ObjectLevelMotion
import sample.club_sandwich
import sample.tuna_sandwich
import sample.greek_salad
import sample.shrimp_salad

import sample.test_33_predict2_v2
import sample.test_49_predict2_v2
import sample.test_80_predict2_v2
import sample.test_15_predict3_v2

KB_PATH = dirname(__file__) + '/task_planning/knowledge_base.yaml'

class PandaMoveNode(Node):
    def __init__(self):
        super().__init__('panda_move_node')
        self.get_logger().info("PandaMoveNode initialized")

    # ----------------------------
    # 함수들: get_network_output, get_knowledge_base 등
    # ----------------------------
    def get_network_output(self, file_path):
        goals = []
        goal_diffs = []
        using_ings = []
        new_objs = defaultdict(list)
        raw_data = None
        
        with open(file_path) as csvfile:
            raw_data = list(csv.reader(csvfile))
        
        num_of_task = int(raw_data[0][0])
        num_of_obj = int(raw_data[0][1])
        ings_1 = raw_data[1]
        ings_2 = raw_data[2]
        new_i = 3
        while True:
            if raw_data[new_i][0] == 'Task':
                break
            else:
                new_objs[raw_data[new_i][0]] = raw_data[new_i][1:]
                new_i += 1
        
        sandwich_idx = -1
        passed_sandwich = False
        passed_salad = False
        for i in range(new_i+1, new_i+1+num_of_task*num_of_obj-1, num_of_obj):
            task = raw_data[i:i+num_of_obj]
            subgoal = dict()
            for row in task:
                obj = row[1]
                state = row[2].split(',')
                rel_on = row[3]
                rel_in = row[4]
                rel_sp = row[5]
                if obj in ings_1:
                    for st in state:
                        if 'exist' in st:
                            subgoal.update({'exist_'+obj: True})
                        elif 'chopped' in st:
                            subgoal.update({'chopped_'+obj: True})
                        elif 'cooked' in st:
                            subgoal.update({'cooked_'+obj: True})
                    if rel_on != 'none':
                        subgoal.update({obj+'_is_on': rel_on})
                    if rel_in != 'none':
                        subgoal.update({obj+'_is_in': rel_in})
                    if rel_sp != 'none':
                        subgoal.update({'spread_on_'+obj: rel_sp})
            # 삭제 로직 (tuna_spread, sandwich, salad)
            if ('exist_tuna_spread' in subgoal.keys()) and subgoal['exist_tuna_spread']:
                for ts_i in range(len(new_objs['tuna_spread'])):
                    del subgoal[new_objs['tuna_spread'][ts_i]+'_is_in']
                    del subgoal['exist_'+new_objs['tuna_spread'][ts_i]]
            if ('exist_sandwich' in subgoal.keys()) and subgoal['exist_sandwich']:
                passed_sandwich = True
                for sand_i in range(len(new_objs['sandwich'])):
                    if sand_i != 0:
                        del subgoal[new_objs['sandwich'][sand_i]+'_is_on']
                        del subgoal['exist_'+new_objs['sandwich'][sand_i]]
            if ('exist_salad' in subgoal.keys()) and subgoal['exist_salad']:
                passed_salad = True
                for sal_i in range(len(new_objs['salad'])):
                    del subgoal[new_objs['salad'][sal_i]+'_is_in']
                    del subgoal['exist_'+new_objs['salad'][sal_i]]
            
            subgoal_diff = dict()
            if goals:
                subgoal_1 = copy.deepcopy(goals[-1])
                for key, val in subgoal.items():
                    if key not in subgoal_1 or subgoal_1[key] != val:
                        subgoal_diff[key] = val
            ings = set()
            for key, val in subgoal_diff.items():
                if 'cooked' in key:
                    ings.add(key[7:])
                if 'chopped' in key:
                    ings.add(key[8:])
                if 'spread_on' in key:
                    ings.add(key[10:])
                if 'is_on' in key:
                    ings.add(key[:-6])
                if 'is_in' in key:
                    ings.add(key[:-6])
                if 'exist' in key:
                    ings.add(key[6:])
                if val not in [True, False] and val != 'bowl':
                    ings.add(val)
                ings |= set(ings_2)
            goals.append(subgoal)
            using_ings.append([ings, {}])
            goal_diffs.append(subgoal_diff)
        return goals, using_ings, new_objs, goal_diffs

    def get_knowledge_base(self):
        with open(KB_PATH) as f:
            yaml_data = yaml.load(f, Loader=yaml.FullLoader)
        return yaml_data

    # ... 여기서 make_obj_state, set_ingredients, get_default_initial 등 나머지 함수도 동일하게 Node 메서드로 정의 ...

    # ----------------------------
    # 실행 함수
    # ----------------------------
    def run_test_set(self):
        self.get_logger().info("Run test set started")
        # 테스트 파일, 결과 경로 등 초기화
        # CSV 로드 → task planner → object level motion → 결과 CSV 저장
        # 기존 run_test_set 내용 그대로 여기서 self.get_logger().info() 사용
        pass  # 기존 함수 내용을 그대로 Node 메서드로 통합

    def main_execution(self):
        # 예제: 하나의 샘플 수행
        sandwich = sample.greek_salad
        knowledge_base = self.get_knowledge_base()
        test_path = os.path.join(dirname(dirname(__file__)), 'test_set/default_v2/', sandwich.test_file_name)
        goals, using_ings, new_objs, goal_diffs = self.get_network_output(test_path)
        default_initial = self.get_default_initial(sandwich.obj_state, knowledge_base)
        self.get_logger().info("Execution ready")
        # 여기서 run_test_set 또는 main loop 호출 가능
        self.run_test_set()


# ----------------------------
# ROS 2 실행용 main
# ----------------------------
def main(args=None):
    rclpy.init(args=args)
    node = PandaMoveNode()
    try:
        node.main_execution()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
