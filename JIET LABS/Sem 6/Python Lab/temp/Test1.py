# Vaibhav Saran 18EJICS169 Python Lab Mid Term Practical 2
data = {"name":[],"rollNo":[],"percentage":[]}
n = int(input("Enter the number of students: "))
print("Enter the details of {} students.".format(n))

# Ques1 part 1
print("Ques 1 part 1 \n\n")
for i in range(0,n):
    a = input("Enter the name of student {}: ".format(i+1))
    b = int(input("Enter the roll number of student {}: ".format(i+1)))
    c = eval(input("Enter the percentage of student {}: ".format(i+1)))
    data["name"].append(a)
    data["rollNo"].append(b)
    data["percentage"].append(c)

# Ques1 part 2
print("Ques 1 part 2 \n\n")
roll = int(input("Enter the roll number of student to be searched: "))
for i in range(len(data["rollNo"])):
    if (data["rollNo"][i]==roll):
        print("Name: ",data["name"][i])
        print("Roll No: ",data["rollNo"][i])
        print("Percentage: ",data["percentage"][i])
        break

# Ques1 part 3
print("Ques 1 part 3 \n\n")
print("Name\tPercentage")
for i in range(len(data["name"])):
    print(data["name"][i],"\t",data["percentage"][i])

# Ques1 Part 4
print("Ques 1 part 4 \n\n")
print("The topper is: ",data["name"][data["percentage"].index(max(data["percentage"]))],"with",max(data["percentage"]),"%")