arr=[1,2,3,4,5] 
even=0
odd=0
for i in range(0,5):
    if arr[i]%2==0:
        even += 1
    else:
        odd += 1
print("No of even elements in the array : ",even)
print("No of odd elements in the array : ",odd)