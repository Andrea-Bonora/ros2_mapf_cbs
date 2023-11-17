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
    def __init__(self, agents, nx, ny):
        
        self.agents = agents
        self.agent_dict = {}
        self.nx = nx
        self.ny = ny

        self.make_agent_dict()

        self.constraints = Constraints()
        self.constraint_dict = {}

    def world_to_map(self, location):
        #CHANGE VALUES AND ADAPT THEM TO REAL RESOLUTION AND ORIGIN
        x = int( (location.x + 10) / 0.05 )
        y = int( (location.y + 10) / 0.05 )
        index = y * self.nx + x
        if index > 0 and index < self.nx*self.ny:
            return index
        return -1

    def get_first_conflict(self, solution):
        max_t = max([len(plan) for plan in solution.values()])
        result = Conflict()
        for t in range(max_t):
            for agent_1, agent_2 in combinations(solution.keys(), 2):
                state_1 = self.get_state(agent_1, solution, t)
                state_2 = self.get_state(agent_2, solution, t)
                if state_1.is_equal_except_time(state_2):
                    result.time_a = len(solution[agent_1]) - t - 1
                    result.time_b = len(solution[agent_2]) - t - 1
                    result.index = t
                    result.type = Conflict.VERTEX
                    result.location_1 = state_1.location
                    result.agent_1 = agent_1
                    result.agent_2 = agent_2
                    return result

            for agent_1, agent_2 in combinations(solution.keys(), 2):
                state_1a = self.get_state(agent_1, solution, t)
                state_1b = self.get_state(agent_1, solution, t+1)

                state_2a = self.get_state(agent_2, solution, t)
                state_2b = self.get_state(agent_2, solution, t+1)

                if state_1a.is_equal_except_time(state_2b) and state_1b.is_equal_except_time(state_2a):
                    result.time_a = len(solution[agent_1]) - t - 1
                    result.time_b = len(solution[agent_2]) - t - 1
                    result.index = t  
                    result.type = Conflict.EDGE
                    result.agent_1 = agent_1
                    result.agent_2 = agent_2
                    result.location_1 = state_1a.location
                    result.location_2 = state_1b.location
                    return result
        return False
    
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
                    result.time_a = t#len(solution[agent_1]) - t
                    result.time_b = t#len(solution[agent_2]) - t
                    result.index = t
                    result.type = Conflict.VERTEX
                    result.location_1a = DiscreteLocation(state_1_pre.location.pose_stamped.pose.position.x, state_1_pre.location.pose_stamped.pose.position.y)
                    result.location_2a = DiscreteLocation(state_2_pre.location.pose_stamped.pose.position.x, state_2_pre.location.pose_stamped.pose.position.y)
                    result.location_1b = DiscreteLocation(state_1.location.pose_stamped.pose.position.x, state_1.location.pose_stamped.pose.position.y) 
                    result.location_2b = DiscreteLocation(state_2.location.pose_stamped.pose.position.x, state_2.location.pose_stamped.pose.position.y)
                    result.agent_1 = agent_1
                    result.agent_2 = agent_2
                    return result

            for agent_1, agent_2 in combinations(solution.keys(), 2):
                state_1a = self.get_state(agent_1, solution, t)
                state_1b = self.get_state(agent_1, solution, t+1)

                state_2a = self.get_state(agent_2, solution, t)
                state_2b = self.get_state(agent_2, solution, t+1)

                if state_1a.is_equal_except_time(state_2b) and state_1b.is_equal_except_time(state_2a):
                    result.time_a = t#len(solution[agent_1]) - t
                    result.time_b = t#len(solution[agent_2]) - t
                    result.index = t  
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

            loc_1a = self.world_to_map(conflict.location_1a)
            loc_1b = self.world_to_map(conflict.location_1b)
            
            points1a = [loc_1a, loc_1a+1, loc_1a-1, loc_1a-self.nx, loc_1a+self.nx,
                      loc_1a+1+self.nx, loc_1a-1+self.nx, loc_1a+1-self.nx, loc_1a-1-self.nx]
            points1b = [loc_1b, loc_1b+1, loc_1b-1, loc_1b-self.nx, loc_1b+self.nx,
                      loc_1b+1+self.nx, loc_1b-1+self.nx, loc_1b+1-self.nx, loc_1b-1-self.nx]
            points1 = list(set(points1a) & set(points1b))

            loc_2a = self.world_to_map(conflict.location_2a)
            loc_2b = self.world_to_map(conflict.location_2b)
            points2a = [loc_2a, loc_2a+1, loc_2a-1, loc_2a-self.nx, loc_2a+self.nx,
                      loc_2a+1+self.nx, loc_2a-1+self.nx, loc_2a+1-self.nx, loc_2a-1-self.nx]
            points2b = [loc_2b, loc_2b+1, loc_2b-1, loc_2b-self.nx, loc_2b+self.nx,
                      loc_2b+1+self.nx, loc_2b-1+self.nx, loc_2b+1-self.nx, loc_2b-1-self.nx]
            points2 = list(set(points2a) & set(points2b))

            for p in points1:
                v1_constraint = VertexConstraint(conflict.time_a, p)
                constraint1.vertex_constraints |= {v1_constraint}
            for p in points2:
                v2_constraint = VertexConstraint(conflict.time_b, p)
                constraint2.vertex_constraints |= {v2_constraint}

            #v1_constraint = VertexConstraint(conflict.time_a, self.world_to_map(conflict.location_1b))
            #v2_constraint = VertexConstraint(conflict.time_b, self.world_to_map(conflict.location_2b))
            #constraint1.vertex_constraints |= {v1_constraint}
            #constraint2.vertex_constraints |= {v2_constraint}
            
            constraint_dict[conflict.agent_1] = constraint1
            constraint_dict[conflict.agent_2] = constraint2
        
        elif conflict.type == Conflict.EDGE:
            constraint1 = Constraints()
            constraint2 = Constraints()

            loc_1_from = self.world_to_map(conflict.location_1a)
            loc_1_to = self.world_to_map(conflict.location_1b)
            points1_from = [loc_1_from, loc_1_from+1, loc_1_from-1, loc_1_from-self.nx, loc_1_from+self.nx,
                      loc_1_from+1+self.nx, loc_1_from-1+self.nx, loc_1_from+1-self.nx, loc_1_from-1-self.nx]
            points1_to = [loc_1_to, loc_1_to+1, loc_1_to-1, loc_1_to-self.nx, loc_1_to+self.nx,
                      loc_1_to+1+self.nx, loc_1_to-1+self.nx, loc_1_to+1-self.nx, loc_1_to-1-self.nx]
            points1 = list(set(points1_from) & set(points1_to))
            
            loc_2_from = self.world_to_map(conflict.location_2a)
            loc_2_to = self.world_to_map(conflict.location_2b)
            points2_from = [loc_2_from, loc_2_from+1, loc_2_from-1, loc_2_from-self.nx, loc_2_from+self.nx,
                      loc_2_from+1+self.nx, loc_2_from-1+self.nx, loc_2_from+1-self.nx, loc_2_from-1-self.nx]
            points2_to = [loc_2_to, loc_2_to+1, loc_2_to-1, loc_2_to-self.nx, loc_2_to+self.nx,
                      loc_2_to+1+self.nx, loc_2_to-1+self.nx, loc_2_to+1-self.nx, loc_2_to-1-self.nx]
            points2 = list(set(points2_from) & set(points2_to))
            
            for p in points1:
                e_constraint1a = EdgeConstraint(conflict.time_a, p, loc_1_to)
                e_constraint1b = EdgeConstraint(conflict.time_a, loc_1_from, p)
                constraint1.edge_constraints |= {e_constraint1a}
                constraint1.edge_constraints |= {e_constraint1b}

            for p in points2:
                e_constraint2a = EdgeConstraint(conflict.time_b, p, loc_2_to)
                e_constraint2b = EdgeConstraint(conflict.time_b, loc_2_from, p)
                constraint2.edge_constraints |= {e_constraint2a}
                constraint2.edge_constraints |= {e_constraint2b}

            #e_constraint1 = EdgeConstraint(conflict.time_a, self.world_to_map(conflict.location_1a), self.world_to_map(conflict.location_1b))
            #e_constraint2 = EdgeConstraint(conflict.time_b, self.world_to_map(conflict.location_2a), self.world_to_map(conflict.location_2b))

            #constraint1.edge_constraints |= {e_constraint1}
            #constraint2.edge_constraints |= {e_constraint2}
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