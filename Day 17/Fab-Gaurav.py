"""
Original file is located at
    https://colab.research.google.com/drive/1_ZY59_JXS1A5cviJz0Aprty5IHnENQrt
"""

term = int(input("Enter the value of n : "))
a,b = 0,1
sum = 0
count = 1
print("Fibonacci Series upto %d is: "%term, end = "")
while(count <= term):
  print(sum, end = ",")
  count += 1
  a = b
  b = sum
  sum = a + b
