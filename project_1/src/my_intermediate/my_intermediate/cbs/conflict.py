from my_intermediate.cbs.discrete_location import DiscreteLocation

class Conflict(object):
    VERTEX = 1
    EDGE = 2
    def __init__(self):
        self.time_a = -1
        self.time_b = -1
        self.index = -1
        self.type = -1

        self.agent_1 = ''
        self.agent_2 = ''

        self.location_1a = DiscreteLocation()
        self.location_1b = DiscreteLocation()
        self.location_2a = DiscreteLocation()
        self.location_2b = DiscreteLocation()

    def __str__(self):
        return '(' + str(self.time_a) + ', ' + self.agent_1 + ', ' + str(self.location_1a) + ', ' + str(self.location_1b) + ', ' \
                + '(' + str(self.time_b) + ', ' + self.agent_2 + ', ' + str(self.location_2a) + ', ' + str(self.location_2b) + ', '