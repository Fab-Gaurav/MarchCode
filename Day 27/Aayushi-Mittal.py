#WAP using a function to find the factorial of a number using recursion.

def factorial(n):
  if n>1:
     return n * factorial(n - 1)
  else:
     return 1
n=int(input())
print(n, "! :", factorial(n))
