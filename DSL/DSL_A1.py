#Group A assignment 1(Nita Ma'am)
GroupA= []
GroupB= []
GroupC= []
one=[]
a=[]
two=[]
three=[]
four=[]

def cricket():
    c=int(input("Enter the number of students playing cricket"))
    for i in range(c):
        rollno=int(input("Enter the required roll no:"))
        GroupA.append(rollno)
    print("List of students playing cricket are:",GroupA)

def badminton():
    b=int(input("Enter the number of students playing badminton"))
    for i in range(b):
        rollno=int(input("Enter the required roll no:"))
        GroupB.append(rollno)
    print("List of students playing badminton are:",GroupB)

def football():
    f=int(input("Enter the number of students playing football"))
    for i in range(f):
        rollno=int(input("Enter the required roll no:"))
        GroupC.append(rollno)
    print("List of students playing football are:",GroupC)

def one():
    a=GroupA + GroupB
    for i in GroupA:
        if i in GroupB:
            a.remove(i)
    print("Students playing both cricket and badminton:", a)


def two():
    z = []
    for i in GroupA:
        if i not in GroupB:
            z.append(i)
    for i in GroupB:
        if i not in GroupA:
            z.append(i)
    print("Students playing either cricket or badminton but not both",z)

def four():
    z=GroupA + GroupC
    for i in GroupA:
        if i in GroupC:
            z.remove(i)
    for i in z:
        if i in GroupB:
            z.remove(i)
    print("Students playing cricket and football but not badminton:",z)

def three():
    z=[]
    for i in range(1,11):
        if i not in GroupA+GroupB:
            z.append(i)
    print("Students playing neither cricket nor badminton are:",z)

cricket()
badminton()
football()
one()
two()
four()
three()