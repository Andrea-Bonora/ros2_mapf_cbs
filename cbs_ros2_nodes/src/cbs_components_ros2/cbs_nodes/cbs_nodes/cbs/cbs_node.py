#cbs_node.py is used to handle the CBS algorithm. It keeps track of the open set and the close set and furthermore
#the environment is kept in a local variable.

from cbs_nodes.cbs.high_level_node import HighLevelNode
from cbs_nodes.cbs.constraint import Constraints
from cbs_nodes.cbs.environment import Environment
from copy import deepcopy

class CBS(object):
    def __init__(self, agents, nx, ny, origin, resolution):
        self.env = Environment(agents, nx, ny, origin, resolution)
        self.open_set = set()
        self.closed_set = set()

    #Create the starting node of the CT using the firsts paths computed by Nav2.
    def get_starting_node(self, plans):
        start = HighLevelNode()
        start.constraint_dict = {}
        for agent in self.env.agent_dict.keys():
           start.constraint_dict[agent] = Constraints()
        start.solution = self.env.compute_solution(plans)
        if not start.solution:
            return None
        start.cost = self.env.compute_solution_cost(start.solution)
        return start

    def generate_plan(self, solution):
        plan = {}
        for agent, path in solution.items():
            path_dict_list = [state.location.pose_stamped for state in path]
            plan[agent] = path_dict_list
        return plan