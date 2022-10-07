print(''' 
1) Rectangle
2) Circle
3) Triangle
''')
ch = int(input("Enter your choice: "))
if(ch==1):
    l = int(input("Enter the length: "))
    b = int(input("Enter the breadth: "))
    print("The area of rectangle is: ",l*b)
elif(ch==2):
    r = int(input("Enter the radius:"))
    print("Area of the circle is: ",3.14*r**2)
elif(ch==3):
    h = int(input("Enter the height of the triangle: "))
    b = int(input("Enter the length of the base: "))
    print("Area of triangle is: ",(b*h)//2)
else:
    print("Enter a valid choice!!")