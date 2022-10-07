#compute distance between two points
import math as m
x1,y1,x2,y2=map(int,input("Enter the coordinates separated by space(x1 y1 x2 y2): ").split())
d=m.sqrt((x2-x1)**2+(y2-y1)**2)
print("The distance between the point {0},{1} and {2},{3} is: {4}".format(x1,y1,x2,y2,d))