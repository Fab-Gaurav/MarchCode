# To merge 2 array into a third array.

arr1 = []
arr2 = []
arr = []
n=int(input())
for i in range(0,n):
    arr1.append(int(input()))
m=int(input())
for i in range(0,m):
    arr2.append(int(input()))
    """
for i in range(0,n):
    arr.append(arr1[i])
for i in range(0,m):
    arr.append(arr2[i])
    """
arr = arr1 + arr2
print("Mergerd array arr[", m+n, "] : ")
for i in range(0,n+m):
    print(arr[i], end=" ")
