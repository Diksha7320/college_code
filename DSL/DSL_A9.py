def enter_matrix(str):
    print("**Enter values for {str} matrix**")
    matrix = []
    row = int(input("Enter number of rows:"))
    col = int(input("Enter number of coloums:"))
    for i in range(row):
        r = []
        for j in range(col):
            value = int(input("Enter value of {i + 1},{j + 1}:"))
            r.append(value)
        matrix.append(r)
    return matrix

def display_matrix(lst):
    for i in lst:
        print(i)
    return 0


def addition(lst1, lst2):
    ans = []
    for i in range(len(lst1)):
        r = []
        for j in range(len(lst1[i])):
            val = lst1[i][j] + lst2[i][j]
            r.append(val)
        ans.append(r)
    return ans


def subtraction(mat1, mat2):
    if len(mat1) != len(mat2) or len(mat1[0]) != len(mat2[0]):
        return print("invalid")
    ans = []
    for i in range(len(mat1)):
        r = []
        for j in range(len(mat1[i])):
            val = mat1[i][j] - mat2[i][j]
            r.append(val)
        ans.append(r)
    return ans


def transpose(matrix):
    ans = []
    for i in range(len(matrix)):
        r = []
        for j in range(len(matrix[i])):
            r.append(0)
        ans.append(r)
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            ans[j][i] = matrix[i][j]
    return ans


def multiply(mat1, mat2):
    ans = []
    row = len(mat1)
    col = len(mat2[0])
    if len(mat1) != len(mat2[0]):
        return print("Invalid row and coloumn count is different")
    for i in range(row):
        r = []
        for j in range(col):
            r.append(0)
        ans.append(r)
    for i in range(row):
        for k in range(col):
            for j in range(col):
                ans[i][k] += mat1[i][j] * mat2[j][k]
    return ans


matrix1 = enter_matrix("first")
matrix2 = enter_matrix("Second")

while True:
    print("MENU")
    print("1.Add matrix")
    print("2.Subtract")
    print("3.Multiply")
    print("4.Transpose")
    choice = input("Enter your choice :")

    if choice == '1':
        sol = addition(matrix1, matrix2)
        print("Addition of the 2 matrices is:")
        display_matrix(sol)
    elif choice == '2':
        sol = subtraction(matrix1, matrix2)
        print("Subtraction of the 2 matrices is:")
        display_matrix(sol)
    elif choice == '3':
        sol = multiply(matrix1, matrix2)
        print("Multiplication of first matrix with second is:")
        display_matrix(sol)
    elif choice == '4':
        print("Transpose of the first matrix is:")
        display_matrix(transpose(matrix1))
        print("Transpose of the second matrix is:")
        display_matrix(transpose(matrix2))
    else:
        break
