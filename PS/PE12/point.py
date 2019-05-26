import math
class Point:

    # This is the constructor!
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distanceFromOrigin(self):
        return ((self.x ** 2) + (self.y ** 2)) ** 0.5
    
    # 9. When is this method called?
    #
    def __str__(self):
        return "(" + str(self.x) + ", " + str(self.y) + ")"

    def get_quadrant(self):
        if self.x >= 0 and self.y >= 0:
            return 1
        elif self.x < 0 and self.y >= 0:
            return 2
        elif self.x < 0 and self.y < 0:
            return 3
        else:
            return 4
def distance(self, point_other):
        dx = point_other.x - self.x
        dy= point_other.y - self.y
        dist = math.sqrt(dx**2 + dy**2)
        return dist
def add_to_values(list, value):
    list = []
    list.append(value)
if __name__ == "__main__":
    p1 = Point(0, 2)
    p2 = Point(2, 4)
    #print(distance(p1, p2))
    #print(p1.distanceFromOrigin())
    # p1.--init--(p1, p1.x, p2.y)
    #print(p1.__str__())
    #print(p1.get_quadrant())
    newlist = []
    add_to_values(newlist, 10)
    add_to_values(newlist, "red")
    for i in newlist:
        print(newlist[i]);

    

    
