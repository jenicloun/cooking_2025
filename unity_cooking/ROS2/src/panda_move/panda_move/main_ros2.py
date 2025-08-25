#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import copy
import csv
import yaml

from collections import defaultdict
from os.path import dirname

import rclpy
from rclpy.node import Node


# from .domain import *


import club_sandwich
import tuna_sandwich
import greek_salad
import shrimp_salad



# KB_PATH = dirname(__file__) + '/task_planning/knowledge_base.yaml'
KB_PATH = dirname(__file__) + '/knowledge_base.yaml'


#-*- encoding: utf-8 -*-
from collections import defaultdict
from copy import deepcopy

class StripsDomain:
    def __init__(self, feats_vals, actions):
        """ Planning Problem의 domain definition
        - feats_vals(state space) = {feature:possible values}
        - actions(action space) = set of possible action """
        self.feats_vals = feats_vals
        self.actions = self.get_actions()

class CookingDomain:
    boolean = {True, False}

    def __init__(self, objects, knowledge_base, new_objs=None):
        self.knowledge_base = knowledge_base
        self.new_objs = new_objs
        self.objects = objects

        self.object_sets = self._make_object_sets()
        self.actions = self.get_actions()

    def _make_object_sets(self):
        """ object category에 따른 object set을 반환 """
        kb = self.knowledge_base
        objects = self.objects

        obj_sets = defaultdict(set)
        for instance, type in objects.items():
            if 'ingredient' in kb[type]['isA']:
                obj_sets['ingredients'].add(instance)
            if 'ing_bottle' in kb[type]['isA']:
                obj_sets['ing_bottles'].add(instance)
            if 'container' in kb[type]['isA']:
                obj_sets['containers'].add(instance)
            if 'tool' in kb[type]['isA']:
                obj_sets['tools'].add(instance)
            if 'place' in kb[type]['isA']:
                obj_sets['places'].add(instance)

        return obj_sets

    def get_actions(self):
        """ 전체 action set을 반환 """
        ingredients = self.object_sets['ingredients']
        ing_bottles = self.object_sets['ing_bottles']
        containers = self.object_sets['containers']
        places = self.object_sets['places']
        tools = self.object_sets['tools']

        obj = self.objects
        kb = self.knowledge_base
        new_objs = self.new_objs

        actions = {PickUp([x], obj, kb, new_objs) for x in ingredients|ing_bottles|containers|tools}
        actions.update({Place([x], obj, kb, new_objs) for x in places}) ###
        actions.update({PutIn([x], obj, kb, new_objs) for x in containers})
        actions.update({PutOn([x], obj, kb, new_objs) for x in containers})
        actions.update({PourIn(['bowl'], obj, kb, new_objs)})
        actions.update({PourOn([x], obj, kb, new_objs) for x in ingredients})
        actions.update({Stack([x], obj, kb, new_objs) for x in ingredients})
        actions.update({Spread([x, y], obj, kb, new_objs) for x in ingredients for y in ingredients if x!=y})
        actions.update({Scoop([x, y], obj, kb, new_objs) for x in ingredients for y in ingredients if x!=y})
        actions.update({Scrape([x, 'bowl'], obj, kb, new_objs) for x in ingredients})
        actions.update({Chop([x], obj, kb, new_objs) for x in ingredients})
        actions.update({Stir(['bowl'], obj, kb, new_objs)})    
        actions.update({Activate(['stove'], obj, kb, new_objs)})

        return actions

class Action:
    def __init__(self, param_list, objects, knowledge_base, new_objs, cost=1):
        self.param_list = param_list
        self.objects = objects
        self.kb = knowledge_base
        self.new_objs = new_objs
        self.name = None
        self.cost = cost

    def preconds(self, state_asst):
        """ 현재 state_asst에서 action을 수행할 수 있는지 여부 판단 """
        raise NotImplementedError('preconds')

    def effects(self, state_asst):
        """ 현재 state_asst에서 action을 수행한 이후의 state를 결정 """
        raise NotImplementedError('effects')
    
    def isA(self, obj_name, obj_type):
        """ obj_name이 obj_type에 속하는지 판단 """
        if obj_type in self.kb[self.objects[obj_name]]['isA']:
            return True
        else:
            return False
    
    def hasProperty(self, obj_name, obj_prop):
        """ obj_name이 obj_prop의 property를 가지고 있는지 판단 """
        if obj_prop in self.kb[self.objects[obj_name]]['HasProperty']:
            return True
        else:
            return False
    
    def atLocation(self, obj_name, obj_to_name):
        """ obj_name이 obj_to_name에 place가능 한지 판단 """
        if self.objects[obj_to_name] in self.kb[self.objects[obj_name]]['AtLocation']:
            return True
        else:
            return False

    def Contains(self, obj_name):
        """ obj_name이 contain하고 있는 object를 반환 """
        return self.kb[self.objects[obj_name]]['Contains'][0]
    
    def capableOf(self, obj_name, action_name):
        """ obj_name이 action_name에 대해 수행 가능한지 판단 """
        if action_name in self.kb[self.objects[obj_name]]['CapableOf']:
            return True
        else:
            return False

    def get_objects_with_type(self, type):
        """ type의 category에 속하는 object set을 반환 """
        objs_with_type = set()
        for obj_instance, obj_type in self.objects.items():
            if type in self.kb[obj_type]['isA']:
                objs_with_type.add(obj_instance)
        return objs_with_type       
    
    def set_action_name(self, task_level, object_level):
        """ Action의 이름을 설정 """
        self.name = object_level
    
    def reset(self, param_list):
        """ Action을 초기화 """
        self.name = ""
        self.param_list = param_list
    
    def __repr__(self):
        return self.name



class PickUp(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)

    def preconds(self, state_asst):
        """ holding이 None이면서 PickUp하려는 obj가 
        ingredient면 조건부 가능, 그 외에는 무조건 가능 """
        obj = self.param_list[0]

        if state_asst['holding'] == 'None':
            if self.isA(obj, 'ingredient'):
                if not(state_asst['chopped_'+obj]) and self.hasProperty(obj, 'graspable') and state_asst['exist_'+obj]:
                    return True
            else:
                return True

        return False

    def effects(self, state_asst):
        """ PickUp한 후, obj을 holding을 하게되며 
        obj와의 in/on 관계는 제거됨 """
        state_asst = deepcopy(state_asst)
        obj = self.param_list[0]

        # state change
        state_asst['holding'] = obj
        state_asst[obj+'_is_in'] = 'None'
        state_asst[obj+'_is_on'] = 'None'

        # set action name
        task_level = 'pick_up_' + obj
        object_level = 'PickUp/{}'.format(obj)
        self.set_action_name(task_level, object_level)

        return state_asst



class Place(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)

    def preconds(self, state_asst):
        """ holding 하고 있는 obj가 place에 Place 가능하면 가능 """
        obj = deepcopy(state_asst['holding'])
        place = self.param_list[0]

        if obj != 'None':
            if self.atLocation(obj, place):
                return True
        
        return False

    def effects(self, state_asst):
        """ Place 한 후, obj는 place 위에 있고 holding은 None이 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        place = self.param_list[0]
        
        # state change
        state_asst['holding'] = 'None'
        state_asst[obj+'_is_on'] = place
        obj_category = self.kb[self.objects[obj]]['isA'][0]

        # set action name
        task_level = 'place_' + obj + '_on_' + place
        object_level = 'Place/{}/{}/{}'.format(obj, place, obj_category)
        self.set_action_name(task_level, object_level)

        return state_asst



class PutIn(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding하는 obj가 ingredient이면서 깊이가 깊은 container에는 PutIn 가능 """
        obj = deepcopy(state_asst['holding'])
        container = self.param_list[0]

        if obj != 'None':
            if self.isA(obj, 'ingredient'):
                if (container =='bowl') or (container == 'pot'):
                    return True
        return False

    def effects(self, state_asst):
        """ PutIn을 한 후, ingredient는 container 안에 있고 holding은 None이 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        container = self.param_list[0]

        # state change
        state_asst['holding'] = 'None'
        state_asst[obj+'_is_in'] = container

        # set action name
        task_level = 'put_' + obj + '_in_' + container
        object_level = 'PutOn/{}/{}/None'.format(obj,container)
        self.set_action_name(task_level, object_level)

        return state_asst



class PutOn(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding하는 obj가 ingredient이면서 깊이가 얕은 container에 PutOn 가능 """
        obj = deepcopy(state_asst['holding'])
        container = self.param_list[0]

        if obj != 'None':
            if self.isA(obj, 'ingredient'):
                if (container =='plate') or (container == 'pan'):
                    return True
        return False

    def effects(self, state_asst):
        """ PutOn을 한 후, ingredient는 container 위에 있고 holding은 None이 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        container = self.param_list[0]

        # state change
        state_asst['holding'] = 'None'
        state_asst[obj+'_is_on'] = container

        # set action name
        task_level = 'put_' + obj + '_on_' + container
        object_level = 'PutOn/{}/{}/None'.format(obj,container)
        self.set_action_name(task_level, object_level)

        return state_asst




class PourIn(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding하는 obj가 ing_bottle이면 PourIn 가능 """
        obj = deepcopy(state_asst['holding'])

        if obj != 'None':
            if self.isA(obj, 'ing_bottle'):
                return True
        
        return False

    def effects(self, state_asst):
        """ PourIn 한 후, ingredient는 container 안에 있고 holding은 None이 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        bowl = 'bowl'

        # state change
        ing_in_bottle = self.Contains(obj)
        state_asst[ing_in_bottle+'_is_in'] = bowl

        # set action name
        task_level = 'pour_' + obj + '_in_' + bowl
        object_level = 'Pour/{}/{}/{}'.format(obj,bowl,ing_in_bottle)
        self.set_action_name(task_level, object_level)

        return state_asst



class PourOn(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding하는 obj가 ing_bottle이고, 
        ing_bottle 안의 ingredient에 PourOn하는 것이 아니면 가능"""
        obj = deepcopy(state_asst['holding'])
        ingredient = self.param_list[0]

        if obj != 'None':
            if self.isA(obj, 'ing_bottle'):
                ing_in_bottle = self.Contains(obj)
                if ing_in_bottle != ingredient:
                    return True
        return False

    def effects(self, state_asst):
        """ PourOn 한 후, ing_bottle 안의 ingredient는 
        다른 ingredient 위에 있고 holding은 None이 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]

        # state change
        ing_in_bottle = self.Contains(obj)
        state_asst['spread_on_'+ing] = ing_in_bottle

        # rename for motion planner
        re_ing = ing
        if state_asst['chopped_'+ing]:
            re_ing = 'chopped_'+ing

        # set action name
        task_level = 'pour_' + obj + '_on_' + ing
        object_level = 'Pour/{}/{}/{}'.format(obj,re_ing,ing_in_bottle)
        self.set_action_name(task_level, object_level)
        
        return state_asst


class Stack(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding하는 obj가 ing이면 이와 
        다른 ing에는 Stack 가능 """
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]

        if obj != 'None':
            if self.isA(obj, 'ingredient') and state_asst['exist_'+ing] and (obj != ing):
                if self.hasProperty(obj, 'stackable') and self.hasProperty(ing, 'stackable'): ## check
                    return True
        return False

    def effects(self, state_asst):
        """ Stack을 한 후, holding하던 obj는 ing 위에 있고 holding은 None이 됨 """
        """ sandwich recipe 순서 대로 모든 ing가 쌓여있을 경우 new_ing 'sandwich' 생성 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]
        
        # state change
        state_asst['holding'] = 'None'
        state_asst[obj+'_is_on'] = ing

        sandwich = 'None'
        if 'sandwich' in self.new_objs.keys():
            recipe = self.new_objs['sandwich']            
            is_sandwich = all([state_asst[recipe[i]+'_is_on'] == recipe[i-1] for i in range(1, len(recipe))])
            if is_sandwich:
                state_asst['sandwich_is_on'] = state_asst[recipe[0]+'_is_on']
                state_asst['exist_sandwich'] = True
                sandwich = 'sandwich'
                for ing_in_recipe in recipe:
                    state_asst[ing_in_recipe+'_is_on'] = 'None'
                    state_asst['exist_'+ing_in_recipe] = False

        # rename for motion planner
        re_ing = deepcopy(ing)
        if state_asst['chopped_'+ing]:
            re_ing = 'chopped_'+ing

        # set action name
        task_level = 'stack_' + obj + '_on_' + ing
        object_level = 'PutOn/{}/{}/{}'.format(obj, re_ing, sandwich)
        self.set_action_name(task_level, object_level)
        return state_asst



class Spread(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding하는 obj가 spread 가능한 tool이고, ing1이 spreadable하다면 가능 """
        obj = deepcopy(state_asst['holding'])
        ing1 = self.param_list[0]
        ing2 = self.param_list[1]

        if obj != 'None':
            if self.isA(obj, 'tool') and self.capableOf(obj, 'spread'):
                if self.hasProperty(ing1, 'spreadable'):
                    return True
        return False

    def effects(self, state_asst):
        """ Spread를 한 후, ing1은 ing2 위에 spread됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        ing1 = self.param_list[0]
        ing2 = self.param_list[1]
        
        # state change
        state_asst['spread_on_'+ing2] = ing1
        # state_asst[ing1+'_is_on'] = 'None'
        # state_asst['exist_'+ing1] = False

        # set action name
        task_level = 'spread_' + ing1 + '_on_' + ing2
        object_level = 'Spread/{}/{}/{}'.format(ing1, ing2, obj)
        self.set_action_name(task_level, object_level)
        return state_asst



class Scoop(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding 하는 obj가 scoop 가능한 tool이고, ing1이 scoopable이면 가능 """
        obj = deepcopy(state_asst['holding'])
        ing1 = self.param_list[0]
        ing2 = self.param_list[1]

        if obj != 'None':
            if self.isA(obj, 'tool') and self.capableOf(obj, 'scoop'):
                if self.hasProperty(ing1, 'scoopable') or state_asst['chopped_'+ing1]:
                    return True
        return False

    def effects(self, state_asst):
        """ Scoop을 한 후, ing1는 ing2 위에 있게 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        ing1 = self.param_list[0]
        ing2 = self.param_list[1]

        # state change
        state_asst[ing1+'_is_in'] = 'None'
        state_asst[ing1+'_is_on'] = ing2

        # rename for motion planner
        re_ing1 = ing1
        if state_asst['chopped_'+ing1]:
            re_ing1 = 'chopped_'+ing1            

        # set action name
        task_level = 'scoop_' + ing1 + '_on_' + ing2
        object_level = 'Scoop/{}/{}/{}'.format(re_ing1, ing2, obj)
        self.set_action_name(task_level, object_level)
        return state_asst


class Scrape(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
    
    def preconds(self, state_asst):
        """ holding 하고 있는 obj가 scrape가능한 tool이고, ing는 chopped인 상태면서,
        bowl이 near_cutting_board에 있으면 Scrape 가능 """
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]
        # bowl = self.param_list[1]
        bowl = 'bowl'

        if obj != 'None':
            if self.isA(obj, 'tool') and self.capableOf(obj, 'scrape'):
                # if state_asst['chopped_'+ing] and state_asst['is_near']:
                if state_asst['chopped_'+ing] and (state_asst[bowl+'_is_on'] == 'near_cutting_board'):
                    return True
        return False

    def effects(self, state_asst):
        """ Scrape을 한 후, ingredient는 bowl 안에 있음 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]
        bowl = 'bowl'

        # state change
        state_asst[ing+'_is_on'] = 'None'
        state_asst[ing+'_is_in'] = bowl

        # rename for motion planner
        re_ing = ing
        if state_asst['chopped_'+ing]:
            re_ing = 'chopped_'+ing

        # set action name
        task_level = 'scrape_'+ing+'_in_'+bowl
        object_level = 'Scrape/{}/{}/{}'.format(re_ing, bowl, obj)
        self.set_action_name(task_level, object_level)
        return state_asst


class Chop(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)

    def preconds(self, state_asst):
        """ holding하는 obj가 chop가능한 tool이며, 
        ing가 cutting_board 위에 있으면 Chop 가능 """
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]

        if obj != 'None':
            if self.isA(obj, 'tool') and self.capableOf(obj, 'chop'):
                if state_asst[ing+'_is_on'] == 'cutting_board':
                    return True
        return False

    def effects(self, state_asst):
        """ Chop을 한 후, ing는 chopped 됨 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        ing = self.param_list[0]

        # state change
        state_asst['chopped_'+ing] = True

        # set action name
        task_level = 'chop_' + ing
        object_level = 'Chop/{}/{}'.format(ing, obj)
        self.set_action_name(task_level, object_level)
        return state_asst


class Stir(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)
        self.ings_in_bowl = []
        self.new_ing = None

    def preconds(self, state_asst):
        """ holding하는 obj가 stir 가능한 tool이고, 
        bowl 안에 있는 ingredient list가 new_ing recipe의 list와 동일하면 Stir 가능 """
        obj = deepcopy(state_asst['holding'])
        # bowl = self.param_list[0]
        bowl = 'bowl'

        if obj != 'None':
            if self.isA(obj, 'tool') and self.capableOf(obj, 'stir'):
                # bowl 안에 있는 ingredient를 모음
                ings_in_bowl = []
                for key, value in state_asst.items():
                    if (key[-3:] == '_in') and (value == bowl):
                        ings_in_bowl.append(key[:-6])

                # bowl 안에 있는 ingredient가 recipe와 동일해야 함
                for new_ing, new_ing_comp in self.new_objs.items():
                    if (set(ings_in_bowl) == set(new_ing_comp)):
                        self.ings_in_bowl = ings_in_bowl
                        self.new_ing = new_ing
                        return True
                
        return False

    def effects(self, state_asst):
        """ Stir을 한 후, bowl 안에 있는 ingredient들은 제거되고, new_ing 생성 """
        state_asst = deepcopy(state_asst)
        obj = deepcopy(state_asst['holding'])
        bowl = 'bowl'

        # state change
        # recipe가 존재하면 새로운 ingredient 생성하고
        # 기존의 ingredient는 state 및 존재 제거
        for ing in self.ings_in_bowl:
            state_asst['exist_'+ing] = False
            state_asst[ing+'_is_in'] = 'None'
            state_asst[ing+'_is_on'] = 'None'
            # state_asst['cooked_'+ing] = False
            # state_asst['chopped_'+ing] = False
        new_ing = self.new_ing
        state_asst['exist_'+new_ing] = True
        state_asst[new_ing+'_is_in'] = bowl

        # set action name
        task_level = 'stir_' + bowl
        object_level = 'Stir/{}/{}/{}'.format(bowl, new_ing, obj)
        self.set_action_name(task_level, object_level)

        return state_asst


class Activate(Action):
    def __init__(self, param_list, objects, knowledge_base, new_objs):
        Action.__init__(self, param_list, objects, knowledge_base, new_objs)

    def preconds(self, state_asst):
        """ holding 하는 것이 없으면 Activate 가능 """
        if state_asst['holding'] == 'None':
            return True
        return False

    def effects(self, state_asst):
        """ Activate를 한 후, pan 안에 있는 ingredient들은 모두 cooked """
        state_asst = deepcopy(state_asst)
        stove = self.param_list[0]
        cookware = 'pan'
        ingredients = self.get_objects_with_type('ingredient')

        # state change
        # pan이 stove위에 있으면 pan 안에 있는 ingredient를 모은다
        ing_on_pan = None
        if state_asst[cookware+'_is_on'] == stove:
            for ing in ingredients:
                if state_asst[ing+'_is_on'] == cookware:
                    state_asst['cooked_'+ing] = True
                    ing_on_pan = ing             

        # set action name
        task_level = 'activate_' + stove
        object_level = 'Activate/{}/{}'.format(stove, ing_on_pan)
        self.set_action_name(task_level, object_level)
        
        return state_asst


def in_relation(x):
    return x+'_is_in'


def on_relation(x):
    return x+'_is_on'


def cooked(x):
    return 'cooked_'+x


def chopped(x):
    return 'chopped_'+x


def is_exist(x):
    return 'exist_'+x


def spread(x):
    return 'spread_on_'+x


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

    def make_obj_state(self, file_path):
        """
        input
        - file_path : file path of network output
        output
        - obj_state : list of object instance, type and state
        """
        ing_idx = dict()
        with open(file_path) as csvfile:
            raw_data = list(csv.reader(csvfile))

        # info of file
        num_of_task = int(raw_data[0][0])
        num_of_obj = int(raw_data[0][1])
        ings_1 = raw_data[1] # ingredient
        ings_2 = raw_data[2] # bottled_ingredient
        new_i = 3
        while True:
            if raw_data[new_i][0] == 'Task':
                break
            else:
                new_i += 1
        
        task0 = raw_data[new_i+1:new_i+1+num_of_obj]
        for t in range(len(task0)):
            if task0[t][1] in ings_1:
                ing_idx[task0[t][1]] = t

        # instance-type-state
        obj_state = []

        # container
        obj_state.append(['pan', 'pan', None])
        obj_state.append(['pot', 'pot', None])
        obj_state.append(['plate', 'plate', None])
        obj_state.append(['bowl', 'bowl', None])

        # tool
        obj_state.append(['spatula', 'spatula', None])
        obj_state.append(['spreader', 'spreader', None])
        obj_state.append(['scooper', 'scooper', None])
        obj_state.append(['knife', 'knife', None])

        # place
        obj_state.append(['table', 'table', None])
        obj_state.append(['stove', 'stove', None])
        obj_state.append(['cutting_board', 'cutting_board', None])
        obj_state.append(['near_cutting_board', 'near_cutting_board', None])

        # ingredient
        for obj in ings_1:
            obj_name = obj
            if obj_name[-1] in ['1', '2', '3']:
                obj_type = obj_name[:-1]
            else:
                obj_type = obj_name
            if 'exist' in task0[ing_idx[obj_name]][2]:
                obj_state.append([obj_name, obj_type, ['exist']])
            else:
                obj_state.append([obj_name, obj_type, []])

        # ingredient bottle
        for obj in ings_2:
            obj_name = obj+'_bottle'
            obj_type = obj+'_bottle'
            obj_state.append([obj_name, obj_type, None])
        
        return obj_state

    def set_ingredients(obj_state, kb, ings):
        """
        input
        - obj_state : list of object instance, type and state
        - kb : knowledge base yaml data
        - ings : list of core ingredients
        output
        - using_objects<dict> : key=object instance, val=object type
        """
        using_objects = dict()
        ing_list = list(ings[0])+list(ings[1])
        for instance, otype, state in obj_state:
            if 'container' in kb[otype]['isA']:
                using_objects[instance] = otype
            elif 'tool' in kb[otype]['isA']:
                using_objects[instance] = otype
            elif 'place' in kb[otype]['isA']:
                using_objects[instance] = otype
            elif 'ingredient' in kb[otype]['isA']:
                if instance in ing_list:
                    using_objects[instance] = otype
            elif 'ing_bottle' in kb[otype]['isA']:
                if kb[otype]['Contains'][0] in ing_list:
                    using_objects[instance] = otype
        return using_objects


    def get_default_initial(self, obj_state, kb):
        """
        input
        - obj_state : list of object instance, type and state
        - kb : knowledge base yaml data
        output
        - initial : set of initial state
        """
        ingredients = set()
        ing_bottles = set()
        tools = set()
        containers = set()
        exist_ings = set()
        objects = dict()

        for (oinstance, otype, ostate) in obj_state:
            # rospy.loginfo("{}, {}, {}".format(oinstance, otype, ostate))
            objects[oinstance] = otype
            if 'ingredient' in kb[otype]['isA']:
                ingredients.add(oinstance)
                if 'exist' in ostate:
                    exist_ings.add(oinstance)
            elif 'ing_bottle' in kb[otype]['isA']:
                ing_bottles.add(oinstance)
            elif 'tool' in kb[otype]['isA']:
                tools.add(oinstance)
            elif 'container' in kb[otype]['isA']:
                containers.add(oinstance)

        initial = {'holding': 'None'}
        initial.update({in_relation(x): 'None' for x in ingredients})
        initial.update({on_relation(x): 'table' for x in ingredients|tools|containers|ing_bottles})
        initial.update({spread(x): 'None' for x in ingredients})
        initial.update({cooked(x): False for x in ingredients})
        initial.update({chopped(x): False for x in ingredients})
        initial.update({is_exist(x): True for x in exist_ings})
        initial.update({is_exist(x): False for x in ingredients-exist_ings})
        
        return initial

    

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
        sandwich = greek_salad
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
