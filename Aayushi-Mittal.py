#WAP using functions to swap two numbers.

def swap(num1, num2):
  temp = num1
  num1 = num2
  num2 = temp
  print("num1: ", num1)
  print("num2: ", num2)

num1=int(input())
num2=int(input())
swap(num1, num2)
