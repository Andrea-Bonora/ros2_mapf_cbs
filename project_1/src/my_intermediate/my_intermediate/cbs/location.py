class Location(object):
    def __init__(self, ps):
        self.pose_stamped = ps
    def is_conflict(self, other):
        if abs(self.pose_stamped.pose.position.x - other.pose_stamped.pose.position.x) <= 0.5 and \
                    abs(self.pose_stamped.pose.position.y - other.pose_stamped.pose.position.y) <= 0.5:
                return True
        return False
    def __eq__(self, other):
        if self.pose_stamped.pose.position.x == other.pose_stamped.pose.position.x and \
              self.pose_stamped.pose.position.y == other.pose_stamped.pose.position.y:
            return True
        return False
    def __str__(self):
        return str((self.pose_stamped.pose.position.x, self.pose_stamped.pose.position.y))