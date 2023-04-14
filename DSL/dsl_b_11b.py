def enter_students():
    print("Please enter data in ascending order.")
    n = int(input("Enter total number of students present:"))
    lst = []
    for i in range(n):
        rollno = int(input("Enter roll no.:"))
        lst.append(rollno)
    print(lst)
    return lst


def binary_search(lst, rollno):
    length = len(lst)
    i = length // 2
    cur = lst[i]
    if cur == rollno:
        return print("Element found")
    if length == 1:
        return print("not found")
    if cur < rollno:
        temp = lst[i + 1:]
        return binary_search(temp, rollno)
    else:
        temp = lst[:i]
        return binary_search(temp, rollno)


def fib_search(lst, search):
    fib = [0, 1]
    a = 0
    b = 1
    c = 1
    while c < len(lst):
        c = a + b
        fib.append(c)
        a, b = b, c

    offset = -1
    k = len(fib) - 1
    n = len(lst)
    while fib[k] > 1:
        temp = min(offset + fib[k - 2], n - 1)
        if lst[temp] == search:
            return print("Element found")
        elif lst[temp] > search:
            k = k - 2
        elif lst[temp] < search:
            k = k - 1
            offset = temp
    return print("not found")


present_lst = enter_students()
present_lst.sort()
while True:
    print("select which search method you would like to use:")
    print("1.Binary Search")
    print("2.Fibonacci Search")
    print("3.Exit code")
    ch = int(input("Enter your choice:"))
    if ch == 1:
        roll = int(input("Enter roll no of student to check present:"))
        binary_search(present_lst, roll)
    elif ch == 2:
        roll = int(input("Enter roll no of student to check present:"))
        fib_search(present_lst, roll)
    elif ch == 3:
        break
    print("-" * 30)
print("Code Exited")
