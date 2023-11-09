class EdgeConstraint(object):
    def __init__(self, time, location_1, location_2, index):
        self.time = time
        self.location_1 = location_1
        self.location_2 = location_2
        self.index = index
    def __eq__(self, other):
        return self.time == other.time and self.location_1 == other.location_1 \
            and self.location_2 == other.location_2
    def __hash__(self):
        return hash(str(self.time) + str(self.location_1) + str(self.location_2))
    def __str__(self):
        return '(' + str(self.time) + ', '+ str(self.location_1) +', '+ str(self.location_2) + ')'