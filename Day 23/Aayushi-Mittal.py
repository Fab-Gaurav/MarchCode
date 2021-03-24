# To count the total number of odd and even numbers in array.

n=int(input()) 
arr=[] 
even=0
odd=0
for i in range(0,n):
    arr.append(int(input()))
    if arr[i]%2==0:
        even++
    else:
        odd++
print("> No of even elements in the array : ",even)
print("> No of odd elements in the array : ",odd)
