from my_intermediate.cbs.constraint import Constraints
from my_intermediate.cbs.state import State
from my_intermediate.cbs.location import Location
from my_intermediate.cbs.discrete_location import DiscreteLocation
from my_intermediate.cbs.conflict import Conflict
from itertools import combinations
from my_intermediate.cbs.vertex_constraint import VertexConstraint
from my_intermediate.cbs.edge_constraint import EdgeConstraint
from math import fabs

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
                    result.time = t
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
                    result.time = t
                    result.type = Conflict.EDGE
                    result.agent_1 = agent_1
                    result.agent_2 = agent_2
                    result.location_1 = state_1a.location
                    result.location_2 = state_1b.location
                    return result
        return False

    def create_constraints_from_conflict(self, conflict):
        constraint_dict = {}
        if conflict.type == Conflict.VERTEX:
            v_constraint = VertexConstraint(conflict.time, conflict.location_1)
            constraint = Constraints()
            constraint.vertex_constraints |= {v_constraint}
            constraint_dict[conflict.agent_1] = constraint
            constraint_dict[conflict.agent_2] = constraint

        elif conflict.type == Conflict.EDGE:
            constraint1 = Constraints()
            constraint2 = Constraints()

            e_constraint1 = EdgeConstraint(conflict.time, conflict.location_1, conflict.location_2)
            e_constraint2 = EdgeConstraint(conflict.time, conflict.location_2, conflict.location_1)

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