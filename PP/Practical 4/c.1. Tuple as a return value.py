# Tuple as a return value
import math
def circle(r):
    c = 2 * math.pi * r
    a = math.pi * r * r
    return (c,a)
radius = int(input("Enter radius of a circle: "))
cir, area = circle(radius)
print("\nCircumference = {:.2f}".format(cir))
print("\nArea = {:.2f}".format(area))