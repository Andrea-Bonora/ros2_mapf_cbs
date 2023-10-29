from my_intermediate.cbs.high_level_node import HighLevelNode
from my_intermediate.cbs.constraint import Constraints
from copy import deepcopy

class CBS(object):
    def __init__(self, environment):
        self.env = environment
        self.open_set = set()
        self.closed_set = set()

    def update_constraints_dict(self):

        P = min(self.open_set)
        self.open_set -= {P}
        self.closed_set |= {P}

        self.env.constraint_dict = P.constraint_dict
        conflict_dict = self.env.get_first_conflict(P.solution)
        
        return P, conflict_dict

    def search(self, plans):

        start = HighLevelNode()
        # TODO: Initialize it in a better way
        start.constraint_dict = {}
        for agent in self.env.agent_dict.keys():
           start.constraint_dict[agent] = Constraints()
        start.solution = self.env.compute_solution(plans)
        #start.solution = plans
        if not start.solution:
            return {}
        #start.cost = self.env.compute_solution_cost(start.solution)

        self.open_set |= {start}

        while self.open_set:
            P = min(self.open_set)
            self.open_set -= {P}
            self.closed_set |= {P}

            self.env.constraint_dict = P.constraint_dict
            conflict_dict = self.env.get_first_conflict(P.solution)
            if not conflict_dict:
                print("solution found")

                return self.generate_plan(P.solution)

            constraint_dict = self.env.create_constraints_from_conflict(conflict_dict)

            for agent in constraint_dict.keys():
                new_node = deepcopy(P)
                new_node.constraint_dict[agent].add_constraint(constraint_dict[agent])

                self.env.constraint_dict = new_node.constraint_dict
                new_node.solution = self.env.compute_solution()
                if not new_node.solution:
                    continue
                new_node.cost = self.env.compute_solution_cost(new_node.solution)

                # TODO: ending condition
                if new_node not in self.closed_set:
                    self.open_set |= {new_node}

        return {}

    def generate_plan(self, solution):
        plan = {}
        for agent, path in solution.items():
            path_dict_list = [{'t':state.time, 'x':state.location.x, 'y':state.location.y} for state in path]
            plan[agent] = path_dict_list
        return plan