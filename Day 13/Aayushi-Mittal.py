# To find whether a number is armstrong or not.
# An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits.

ld=0 
count=0 
sum=0
print("enter a number to check armstrong number : ")
num = int(input())
while num>0:
    num=num/10
    count++
while num>0:
    num=num/10
    ld=num%10
    sum=sum+ld**count
if sum==num:
    print("it is an armstrong number.")
else:
    print("it is not an armstrong number.")
