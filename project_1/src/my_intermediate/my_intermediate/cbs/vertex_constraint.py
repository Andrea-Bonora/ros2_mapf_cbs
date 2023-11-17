class VertexConstraint(object):
    def __init__(self, time, location):
        self.time = time
        self.index = location

    def __eq__(self, other):
        return self.time == other.time and self.index == other.index
    def __hash__(self):
        return hash(str(self.time)+str(self.index))
    def __str__(self):
        return '(' + str(self.time) + ', '+ str(self.index) + ')'