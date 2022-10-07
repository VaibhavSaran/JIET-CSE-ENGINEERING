#countdown printer
import time
n = int(input("Enter the number: "))
while n>=0:
    print(n)
    n-=1
    time.sleep(0.5)