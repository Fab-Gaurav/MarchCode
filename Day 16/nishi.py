# "To find whether a number is Palindrome or not."

n = int(input("Enter a number here:\n\n"))

k = n
ans = 0

while (k != 0):
    rem = k % 10
    ans = (ans * 10) + rem
    k = k // 10

if (ans == n):
    print("It is a Palindrome")

else:
    print("It is not a Palindrome")
