#VAIBHAV SARAN 18EJICS169 END TERM PRACTICAL
print("Python End Sem Practical Examination")
print("Name: Vaibhav Saran")
print("Roll No.: 18EJICS169")
print("Q13")

class Point(object):
    "represents a point in 2-D space"

class Rectangle(object):
    """Represents a rectangle.

    attributes: width, height, corner"""

def move_rectangle(rect, dx, dy):
    rect.corner.x += dx
    rect.corner.y += dy


box = Rectangle()
box.width = 100.0
box.height = 200.0
box.corner = Point()

x = float(input("Enter x-coordinate\t"))
y = float(input("Enter y-coordinate\t"))
dx = float(input("Enter dx value\t"))
dy = float(input("Enter dy value\t"))

box.corner.x = x
box.corner.y = y

move_rectangle(box,dx, dy)

print ("New x-coordinate is ",box.corner.x)
print ("New y-coordinate is ",box.corner.y)