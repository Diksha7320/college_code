#Assignment 2 (Nita Ma'am)
n=int(input("Enter the number of students of the class:"))
mk=[]

def marks():
    for i in range(n):
        m=int(input("Enter the marks of each student:"))
        mk.append(m)
    print("Marks of students are:", mk)

def absentees():
    c=0
    for i in mk:
        if i==-1:
            c=c+1
    print("Number of students absent for the test are:",c)

def average():
    s=0
    for i in mk:
        if i!=-1:
            s=s+i
    avg=s/len(mk)
    print("Average score of class is:",avg)

def highest():
    h=mk[0]
    for i in mk:
        if i>h:
            h=i
    print("Highest score of the class is:",h)

def lowest():
    h = 10
    for i in mk:
        if i!=-1:
            if i<h:
                h = i
    print("Lowest score of the class is:", h)

def frequency():
    fr=[]
    m=[]
    for i in mk:
        if i in m:
            fr[m.index(i)]+=1

        else:
            m.append(i)
            fr.append(1)

    freq=max(fr)
    v=fr.index(freq)

    print("Marks with highest frequency",m[v])
    print("Frequency is:",freq)

marks()
absentees()
highest()
lowest()
average()
frequency()