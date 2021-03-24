# To Find the maximum and minimum number in an array.

n=int(input()) 
arr=[] 
maximum=-100000
minimum=100000
for i in range(0,n):
    arr.append(int(input()))
    if maximum<arr[i]:
        maximum = arr[i]
    if minimum>arr[i]:
        minimum = arr[i]
print("> Maximum : ",maximum)
print("> Minimum : ",minimum)
