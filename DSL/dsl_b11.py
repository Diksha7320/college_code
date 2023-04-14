#SHUBHANGI MA'AM PRAC B11(A)
rn = []
pr = []
ab = []

r = int(input("Enter the number of students of the class:"))
for i in range(r):
    rollno = int(input("Enter roll number of the student:"))
    rn.append(rollno)
    rn.sort()

print("Roll number of students are:", rn)

p = int(input("Enter the number of students who attended the training program:"))
for i in range(p):
    present = int(input("Enter roll number of the student who attended the session:"))
    pr.append(present)
    pr.sort()

print("Roll number of students who attended the session are:", pr)



def linear():
    c = int(input("Enter a value to be searched:"))
    if c in pr:
        print(c, "is present for the session")
    else:
        print(c, "is absent for the session")

def sentinal():
    i = 0
    rollno = int(input("Enter roll no of student to check present:"))
    pr.append(rollno)
    while pr[i] != rollno:
        i += 1
    if i == len(pr) - 1:
        return print(rollno,"is not present for the session")
    else:
        return print(rollno,"is present for the session")

print("Menu:\n1.Linear Search\n2.Sentinal Search")
n=int(input("Enter choice:"))
if n==1:
    linear()
if n==2:
sentinal()