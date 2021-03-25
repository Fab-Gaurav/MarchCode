#To print all the unique elements in an array.

n=int(input()) 
arr=[] 
for i in range(0,n):
    arr.append(int(input()))
arr.sort()
print("Unique Elements of the array are:", end=" ")
for i in range(0,n):
    if i+1<n and arr[i+1]!=arr[i]:
        print(arr[i], end=", ")
