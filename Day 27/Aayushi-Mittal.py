#WAP using a function to find the factorial of a number using recursion.

def factorial(n):
  fact=1
  for i in range(2, n+1):
    fact *= i
  return fact
n=int(input())
print(n, "! :", factorial(n))
