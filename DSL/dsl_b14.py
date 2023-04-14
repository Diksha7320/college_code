# Shubhangi Khade ma'am bubble and selection sorting 

n=int(input("Enter the number of students of the class:"))
mk=[]
for i in range(n):
    m=float(input("Enter the marks of each student:"))
    mk.append(m)

print("Marks of students are:", mk)

def selection_sort(mk):
    for i in range(len(mk)):
        for j in range(i, len(mk)):
            if mk[i] > mk[j]:
                mk[j], mk[i] = mk[i], mk[j]
    print("Marks of students using selection sort are:",mk)
    return mk


def bubble_sort(mk):
    for i in range(len(mk)):
        for j in range(0, len(mk)-i-1):
            if mk[j] > mk[j+1]:
                mk[j], mk[j+1] = mk[j+1],mk[j]
    print("Marks of students using bubble sort are:",mk)
    init=-1
    print("Marks of top 5 students are:")
    while init>=-5:
        print(mk[init])
        init-=1
    return mk

selection_sort(mk)
bubble_sort(mk)