from my_intermediate.cbs.high_level_node import HighLevelNode
from my_intermediate.cbs.constraint import Constraints
from my_intermediate.cbs.environment import Environment
from copy import deepcopy

class CBS(object):
    def __init__(self, agents, nx, ny):
        self.env = Environment(agents, nx, ny)
        self.open_set = set()
        self.closed_set = set()

    def create_start_node(self, plans, discrete_plans):
        #First solution computation, we already have it, so it is simply a conversion in the desired format
        start = HighLevelNode()
        start.constraint_dict = {}
        for agent in self.env.agent_dict.keys():
           start.constraint_dict[agent] = Constraints()
        start.discrete_solution = self.env.compute_solution(discrete_plans)
        start.solution = self.env.compute_solution(plans)
        start.cost = self.env.compute_solution_cost(start.discrete_solution)
        return start

    def get_starting_node(self, plans, discrete_plans):
        start = HighLevelNode()
        start.constraint_dict = {}
        for agent in self.env.agent_dict.keys():
           start.constraint_dict[agent] = Constraints()
        start.discrete_solution = self.env.compute_solution(discrete_plans)
        start.solution = self.env.compute_solution(plans)
        if not start.discrete_solution:
            return None
        start.cost = self.env.compute_solution_cost(start.discrete_solution)
        return start

    def update_constraints_dict(self):
        P = min(self.open_set)
        self.open_set -= {P}
        self.closed_set |= {P}

        self.env.constraint_dict = P.constraint_dict
        conflict_dict = self.env.get_first_conflict(P.discrete_solution)
        
        return P, conflict_dict

    def generate_plan(self, solution):
        plan = {}
        for agent, path in solution.items():
            path_dict_list = [state.location.pose_stamped for state in path]
            plan[agent] = path_dict_list
        return plan