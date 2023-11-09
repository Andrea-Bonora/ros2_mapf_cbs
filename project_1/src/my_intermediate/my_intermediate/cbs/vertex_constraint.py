class VertexConstraint(object):
    def __init__(self, time, location, index):
        self.time = time
        self.location = location
        self.index = index

    def __eq__(self, other):
        return self.time == other.time and self.location == other.location
    def __hash__(self):
        return hash(str(self.time)+str(self.location))
    def __str__(self):
        return '(' + str(self.time) + ', '+ str(self.location) + ')'