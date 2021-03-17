n = input()
l1 = list(n)
l2 = l1[::-1]
if l1 == l2:
    print("It is palindrome")
else:
    print("It is not a palindrome")
