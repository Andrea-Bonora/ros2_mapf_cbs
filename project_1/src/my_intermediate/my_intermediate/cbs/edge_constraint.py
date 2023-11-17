class EdgeConstraint(object):
    def __init__(self, time, location_1, location_2):
        self.time = time
        self.from_index = location_1
        self.to_index = location_2
        
    def __eq__(self, other):
        return self.time == other.time and self.from_index == other.from_index \
            and self.to_index == other.to_index
    def __hash__(self):
        return hash(str(self.time) + str(self.from_index) + str(self.to_index))
    def __str__(self):
        return '(' + str(self.time) + ', '+ str(self.from_index) +', '+ str(self.to_index) + ')'