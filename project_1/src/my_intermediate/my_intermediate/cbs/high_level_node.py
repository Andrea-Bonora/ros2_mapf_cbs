class HighLevelNode(object):
    def __init__(self):
        self.solution = {}
        self.discrete_solution = {}
        self.constraint_dict = {}
        self.cost = 0

    def __eq__(self, other):
        if not isinstance(other, type(self)): return NotImplemented
        return self.solution == other.solution and self.cost == other.cost and self.discrete_solution == other.discrete_solution

    def __hash__(self):
        return hash((self.cost))

    def __lt__(self, other):
        return self.cost < other.cost