# To find whether a number is Perfect or not.
# Perfect number is a positive integer which is equal to the sum of its proper positive divisors.

num=0 
sum=0;
num = int(input("enter a number : "))
for i in range(0, num):
    if num%i==0:
        sum+=i
if sum==num:
    print(sum," is a perfect number.")
else:
    print(num, " is not a perfect number.")
