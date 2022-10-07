# #Armstrong Number
n = int(input("Enter the number to be checked for armstrong: "))
# find the number of digits
d,k=0,n
while (k!=0):
    k=k//10
    d+=1
# checking the conditions
res,k=0,n
while k!=0:
    rem=k%10
    res = res + rem**d
    k=k//10
if res==n:
    print("The number is armstrong!!")
else:
    print("The number is not armstrong!!")

# Armstrong numbers in first 1000 natural numbers
for i in range(1,1001):
    d,k=0,i
    while (k!=0):
        k=k//10
        d+=1
    # checking the conditions
    res,k=0,i
    while k!=0:
        rem=k%10
        res = res + rem**d
        k=k//10
    if res==i:
        print("The number {} is armstrong!!".format(i))

# Printing patterns
n = int(input("Enter the height of the triangle(>3): "))
a = ''
for i in range(1,n+1):
    if (i == 1):
        print("",i)
    else:
        print(a,i)
    a = a + " " + str(i)
print("\n")
for i in range(1,n+1):
    print(str(i)*i)

#finding largest of 3 numbers
x,y,z = map(int,input("Enter the 3 numbers: ").split())
l = [x,y,z]
print("The maximum number is: ",max(l))

# To check for prime number
n = int(input("Enter the number to be checked for prime: "))
for i in range(2,n):
    if (n%i==0):
        print("The number is not prime!!!")
        break
else:
    print("The number is prime!!")

# To find factorial of a number
n = int(input("Enter the number whose factorial is to be found: "))
p=1
for i in range(n,0,-1):
    p=p*i
print("The factorial is: ",p)
