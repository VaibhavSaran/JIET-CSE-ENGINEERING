#VAIBHAV SARAN 18EJICS169 END TERM PRACTICAL
print("Python End Sem Practical Examination")
print("Name: Vaibhav Saran")
print("Roll No.: 18EJICS169")
print("Q1")
data = {"name":[],"rollNo":[],"totalMarks":[]}
n = int(input("Enter the number of students: "))
print("Enter the details of {} students.".format(n))
print()
for i in range(0,n):
    b = int(input("Enter the roll number of student {}: ".format(i+1)))
    a = input("Enter the name of student {}: ".format(i+1))
    c = eval(input("Enter the total marks of student {}: ".format(i+1)))
    data["name"].append(a)
    data["rollNo"].append(b)
    data["totalMarks"].append(c)
    print()
print()
name = input("Enter the name of student to be searched: ")
for i in range(len(data["name"])):
    if (data["name"][i]==name):
        print("Name: ",data["name"][i])
        print("Roll No: ",data["rollNo"][i])
        print("Total Marks: ",data["totalMarks"][i])
        break
print()
# assuming there are 5 subjects and in each subject total marks are 100
for i in range(len(data["name"])):
    print("Name: ",data["name"][i])
    print("Roll No: ",data["rollNo"][i])
    print("Total Marks: ",data["totalMarks"][i])
    avg = data["totalMarks"][i]/500
    print("Average: ",avg)
    print()
    
