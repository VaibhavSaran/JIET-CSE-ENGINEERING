x = input("Enter your string: ")
n = x.split(" ")
count = 0
for i in x:
    if i.isalpha():
        count+=1
print("Word count:",len(n))
print("alphabet count:",count)