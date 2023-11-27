from my_intermediate.cbs.constraint import Constraints
from my_intermediate.cbs.state import State
from my_intermediate.cbs.location import Location
from my_intermediate.cbs.discrete_location import DiscreteLocation
from my_intermediate.cbs.conflict import Conflict
from itertools import combinations
from my_intermediate.cbs.vertex_constraint import VertexConstraint
from my_intermediate.cbs.edge_constraint import EdgeConstraint
from math import fabs, atan
import numpy as np

class Environment(object):
    def __init__(self, agents, nx, ny, origin, resolution):
        
        self.agents = agents
        self.agent_dict = {}
        self.nx = nx
        self.ny = ny
        self.origin = origin
        self.resolution = resolution

        self.make_agent_dict()

        self.constraints = Constraints()
        self.constraint_dict = {}

    def world_to_map(self, location):
        #CHANGE VALUES AND ADAPT THEM TO REAL RESOLUTION AND ORIGIN
        x = int( (location.x - self.origin['x']) / self.resolution )
        y = int( (location.y - self.origin['y']) / self.resolution )
        index = y * self.nx + x
        if index > 0 and index < self.nx*self.ny:
            return index
        return -1

    def get_all_conflicts(self, solution):
        max_t = max([len(plan) for plan in solution.values()])
        conflicts = []
        for t in range(max_t):
            for agent_1, agent_2 in combinations(solution.keys(), 2):
                state_1 = self.get_state(agent_1, solution, t)
                state_2 = self.get_state(agent_2, solution, t)
                if state_1.is_equal_except_time(state_2):
                    result = Conflict()
                    state_1_pre = self.get_state(agent_1, solution, t-1)
                    state_2_pre = self.get_state(agent_2, solution, t-1)
                    result.time_1 = t
                    result.time_2 = t
                    result.index = t
                    result.type = Conflict.VERTEX
                    result.location_1a = DiscreteLocation(state_1_pre.location.pose_stamped.pose.position.x, state_1_pre.location.pose_stamped.pose.position.y)
                    result.location_2a = DiscreteLocation(state_2_pre.location.pose_stamped.pose.position.x, state_2_pre.location.pose_stamped.pose.position.y)
                    result.location_1b = DiscreteLocation(state_1.location.pose_stamped.pose.position.x, state_1.location.pose_stamped.pose.position.y) 
                    result.location_2b = DiscreteLocation(state_2.location.pose_stamped.pose.position.x, state_2.location.pose_stamped.pose.position.y)
                    result.agent_1 = agent_1
                    result.agent_2 = agent_2
                    conflicts.append(result)
            if t > 0:
                for agent_1, agent_2 in combinations(solution.keys(), 2):
                    state_1a = self.get_state(agent_1, solution, t-1)
                    state_1b = self.get_state(agent_1, solution, t)

                    state_2a = self.get_state(agent_2, solution, t-1)
                    state_2b = self.get_state(agent_2, solution, t)

                    if state_1a.is_equal_except_time(state_2b) and state_1b.is_equal_except_time(state_2a):
                        result = Conflict()
                        result.time_1 = t - 1
                        result.time_2 = t - 1  
                        result.type = Conflict.EDGE
                        result.agent_1 = agent_1
                        result.agent_2 = agent_2
                        result.location_1a = DiscreteLocation(state_1a.location.pose_stamped.pose.position.x, state_1a.location.pose_stamped.pose.position.y) 
                        result.location_1b = DiscreteLocation(state_1b.location.pose_stamped.pose.position.x, state_1b.location.pose_stamped.pose.position.y) 
                        result.location_2a = DiscreteLocation(state_2a.location.pose_stamped.pose.position.x, state_2a.location.pose_stamped.pose.position.y)
                        result.location_2b = DiscreteLocation(state_2b.location.pose_stamped.pose.position.x, state_2b.location.pose_stamped.pose.position.y)
                        conflicts.append(result)
        return self.group_conflicts(conflicts)
    
    def group_conflicts(self, conflicts):
        if len(conflicts) == 0: return []
        groupped_conflicts = []
        ref_conf = None
        loc1_ref = loc2_ref = 0
        for conf in conflicts:
            if ref_conf == None:
                ref_conf = conf
                groupped_conflicts.append(conf)
                loc1_ref = conf.location_1b
                loc2_ref = conf.location_2b            
            else:
                if abs(loc1_ref.x - conf.location_1b.x) < 0.5 and abs(loc1_ref.y - conf.location_1b.y) < 0.5 and \
                        abs(loc2_ref.x - conf.location_2b.x) < 0.5 and abs(loc2_ref.y - conf.location_2b.y) < 0.5:
                    pass
                else:
                    ref_conf = conf
                    loc1_ref = conf.location_1b
                    loc2_ref = conf.location_2b
                    groupped_conflicts.append(conf)
        return groupped_conflicts    

    def get_first_c_conflict(self, solution):
        max_t = max([len(plan) for plan in solution.values()])
        result = Conflict()
        for t in range(max_t):
            for agent_1, agent_2 in combinations(solution.keys(), 2):
                state_1 = self.get_state(agent_1, solution, t)
                state_2 = self.get_state(agent_2, solution, t)
                if state_1.is_equal_except_time(state_2):
                    state_1_pre = self.get_state(agent_1, solution, t-1)
                    state_2_pre = self.get_state(agent_2, solution, t-1)
                    result.time_1 = t 
                    result.time_2 = t 
                    result.type = Conflict.VERTEX
                    result.location_1a = DiscreteLocation(state_1_pre.location.pose_stamped.pose.position.x, state_1_pre.location.pose_stamped.pose.position.y)
                    result.location_2a = DiscreteLocation(state_2_pre.location.pose_stamped.pose.position.x, state_2_pre.location.pose_stamped.pose.position.y)
                    result.location_1b = DiscreteLocation(state_1.location.pose_stamped.pose.position.x, state_1.location.pose_stamped.pose.position.y) 
                    result.location_2b = DiscreteLocation(state_2.location.pose_stamped.pose.position.x, state_2.location.pose_stamped.pose.position.y)
                    result.agent_1 = agent_1
                    result.agent_2 = agent_2
                    return result

            if t > 0:
                for agent_1, agent_2 in combinations(solution.keys(), 2):
                    state_1a = self.get_state(agent_1, solution, t-1)
                    state_1b = self.get_state(agent_1, solution, t)

                    state_2a = self.get_state(agent_2, solution, t-1)
                    state_2b = self.get_state(agent_2, solution, t)

                    if state_1a.is_equal_except_time(state_2b) and state_1b.is_equal_except_time(state_2a):
                        result.time_1 = t-1
                        result.time_2 = t-1
                        result.type = Conflict.EDGE
                        result.agent_1 = agent_1
                        result.agent_2 = agent_2
                        result.location_1a = DiscreteLocation(state_1a.location.pose_stamped.pose.position.x, state_1a.location.pose_stamped.pose.position.y) 
                        result.location_1b = DiscreteLocation(state_1b.location.pose_stamped.pose.position.x, state_1b.location.pose_stamped.pose.position.y) 
                        result.location_2a = DiscreteLocation(state_2a.location.pose_stamped.pose.position.x, state_2a.location.pose_stamped.pose.position.y)
                        result.location_2b = DiscreteLocation(state_2b.location.pose_stamped.pose.position.x, state_2b.location.pose_stamped.pose.position.y)
                        return result
        return False

    def create_constraints_from_conflict(self, conflict):
        constraint_dict = {}
        if conflict.type == Conflict.VERTEX:
            constraint1 = Constraints()
            constraint2 = Constraints()
            
            v1_constraint = VertexConstraint(conflict.time_1, self.world_to_map(conflict.location_2b))
            v2_constraint = VertexConstraint(conflict.time_2, self.world_to_map(conflict.location_1b))
            constraint1.vertex_constraints |= {v1_constraint}
            constraint2.vertex_constraints |= {v2_constraint}
            
            constraint_dict[conflict.agent_1] = constraint1
            constraint_dict[conflict.agent_2] = constraint2
        
        elif conflict.type == Conflict.EDGE:
            constraint1 = Constraints()
            constraint2 = Constraints()

            e_constraint1 = EdgeConstraint(conflict.time_1, self.world_to_map(conflict.location_2a), self.world_to_map(conflict.location_2b))
            e_constraint2 = EdgeConstraint(conflict.time_2, self.world_to_map(conflict.location_1a), self.world_to_map(conflict.location_1b))

            constraint1.edge_constraints |= {e_constraint1}
            constraint2.edge_constraints |= {e_constraint2}
            constraint_dict[conflict.agent_1] = constraint1
            constraint_dict[conflict.agent_2] = constraint2

        return constraint_dict
    
    def get_state(self, agent_name, solution, t):
        if t < len(solution[agent_name]):
            return solution[agent_name][t]
        else:
            return solution[agent_name][-1]

    def make_agent_dict(self):
        for agent in self.agents:
            start_state = State(0, DiscreteLocation(self.agents[agent]['start'].pose.position.x, self.agents[agent]['start'].pose.position.y))
            goal_state = State(0, DiscreteLocation(self.agents[agent]['goal'].pose.position.x, self.agents[agent]['goal'].pose.position.y))

            self.agent_dict.update({agent:{'start':start_state, 'goal':goal_state}})

    def compute_solution(self, plans):
        solution = {}
        for i in range(len(plans)):
            solution.update({plans[i]['name']:plans[i]['path']})
        return solution

    def compute_solution_cost(self, solution):
        return sum([len(path) for path in solution.values()])