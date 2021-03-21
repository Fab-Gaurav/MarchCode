"""
Write a program to print the pattern upto n number
1	
2 2	
3 3 3	
n n n n . . . . n times	
"""
n = int(input())
for i in range(1,n+1):
  for j in range(1, i+1):
    print(i, end=" ")
  print(" ")
