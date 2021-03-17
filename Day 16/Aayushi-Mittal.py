# To find whether a number is Palindrome or not.

rev=0
num = int(input())
i = num
while i!=0 :
    rev = rev*10 + (i%10)
    i=i/10
if num == rev:
    print(num," is a palindrome.")
else:
    print(num," is not a palindrome.")
