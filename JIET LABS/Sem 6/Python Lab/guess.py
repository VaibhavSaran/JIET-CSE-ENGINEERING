import random as rnd
ans = rnd.randint(0,20)
if (ans<5):
    hint="very small number"
elif(ans<10 and ans>5):
    hint="small number"
elif (ans>10 and ans<15):
    hint="big number"
else:
    hint="very big number"
print("*"*5," WELCOME TO GUESSING GAME ","*"*5)
print("\n\nYou have to guess the number \n\n")
while True:
    x=int(input("\nEnter your guess: "))
    if x == ans:
        print("Your guessed it right!!!!!")
        break
    elif (x == ans -1) | (x == ans + 1):
        print("Very close!!!")
    else:
        print(hint)

#16 jan assi 1 variables and data types
# 30 jan assi 2 strings and operators
# 06 feb assi 3 if else  and loops
# Start main python theory
# objective; resources used ; code; output