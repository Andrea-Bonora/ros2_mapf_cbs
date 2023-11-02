class Location(object):
    def __init__(self, ps):
        self.pose_stamped = ps
    def __eq__(self, other):
        return self.pose_stamped.pose.position.x == other.pose_stamped.pose.position.x and self.pose_stamped.pose.position.y == other.pose_stamped.pose.position.y
    def __str__(self):
        return str((self.x, self.y))