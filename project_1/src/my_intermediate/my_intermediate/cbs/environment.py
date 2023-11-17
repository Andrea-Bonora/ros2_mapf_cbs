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
    def __init__(self, agents):
        
        self.agents = agents
        self.agent_dict = {}

        self.make_agent_dict()

        self.constraints = Constraints()
        self.constraint_dict = {}

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
            '''
            #Add conflict for all the area of the robot (TODO)
            blocked_points_1 = self.get_points_colliding(conflict.location_1a, conflict.location_2b)  
            blocked_points_2 = self.get_points_colliding(conflict.location_2a, conflict.location_1b)            
            
            for point in blocked_points_1:
                tmp = DiscreteLocation()
                tmp.x = point[0]
                tmp.y = point[1]
                v1_constraint = VertexConstraint(conflict.time_a, tmp, conflict.index)
                constraint1.vertex_constraints |= {v1_constraint}
            
            for point in blocked_points_2:
                tmp = DiscreteLocation()
                tmp.x = point[0]
                tmp.y = point[1]
                v2_constraint = VertexConstraint(conflict.time_b, tmp, conflict.index)
                constraint2.vertex_constraints |= {v2_constraint}
               
            #tmp = DiscreteLocation()
            #tmp.x = conflict.location_1a.x
            #tmp.y = conflict.location_1a.y
            '''
            v1_constraint = VertexConstraint(conflict.time_a, conflict.location_1a, conflict.index)
            v2_constraint = VertexConstraint(conflict.time_b, conflict.location_2a, conflict.index)
            constraint1.vertex_constraints |= {v1_constraint}
            constraint2.vertex_constraints |= {v2_constraint}
            
            constraint_dict[conflict.agent_1] = constraint1
            constraint_dict[conflict.agent_2] = constraint2
        
        elif conflict.type == Conflict.EDGE:
            constraint1 = Constraints()
            constraint2 = Constraints()
            '''
            blocked_points_1 = self.get_points_colliding(conflict.location_1a, conflict.location_2b)
            blocked_points_2 = self.get_points_colliding(conflict.location_2a, conflict.location_1b)
            
            #blocked_points_1b = self.get_points_colliding_edges(conflict.location_1a.x, conflict.location_1a.y, conflict.location_2a.x, conflict.location_2a.y, max_dist = 0.05)
            #blocked_points_2b = self.get_points_colliding_edges(conflict.location_2a.x, conflict.location_2a.y, conflict.location_1a.x, conflict.location_1a.y, max_dist = 0.05)

            for point in blocked_points_1:
                tmp = DiscreteLocation()
                tmp.x = point[0]
                tmp.y = point[1]
                e_constraint1 = EdgeConstraint(conflict.time_a, conflict.location_1a, tmp, conflict.index)
                constraint1.edge_constraints |= {e_constraint1}

            for point in blocked_points_2:
                tmp = DiscreteLocation()
                tmp.x = point[0]
                tmp.y = point[1]
                e_constraint2 = EdgeConstraint(conflict.time_b, conflict.location_2a, tmp, conflict.index)
                constraint2.edge_constraints |= {e_constraint2}
            '''
            e_constraint1 = EdgeConstraint(conflict.time_a, conflict.location_1a, conflict.location_1b, conflict.index)
            e_constraint2 = EdgeConstraint(conflict.time_b, conflict.location_2a, conflict.location_2b, conflict.index)

            constraint1.edge_constraints |= {e_constraint1}
            constraint2.edge_constraints |= {e_constraint2}
            constraint_dict[conflict.agent_1] = constraint1
            constraint_dict[conflict.agent_2] = constraint2

        return constraint_dict
    
    def get_points_colliding(self, start, ref, step = 0.05, max_dist = 0.8):
        bc = []
        for x in np.arange(start.x - step, start.x + step + step/2, step):
            for y in np.arange(start.y - step, start.y + step + step/2, step):
                if abs(x - ref.x) < 0.8 and abs(y - ref.y) < 0.8:
                    bc.append((x,y))
        return bc

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