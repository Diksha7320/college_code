#shubhangi maam prac B16-QUICK SORT
def partition(arr, low, high):
    i = (low - 1)
    pivot = arr[high]  # pivot element
    for j in range(low, high):
        # If current element is smaller
        if arr[j] <= pivot:
            # increment
            i = i + 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return (i + 1)


# sort
def quickSort(arr, low, high):
    if low < high:
        # index
        pi = partition(arr, low, high)
        # sort the partitions
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)



n=int(input("Enter the number of students of the class:"))
arr=[]
for i in range(n):
    m=float(input("Enter the percentage of each student:"))
    arr.append(m)
print("Marks of students are:", arr)

quickSort(arr, 0, n - 1)
print("Sorted array is:")
for i in range(n):
    print(arr[i],end=",")