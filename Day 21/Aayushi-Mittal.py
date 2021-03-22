"""
Write a program to print the pattern upto n lines
A	
B C	
D E F ... Upto n lines
"""

n = int(input())
c='A';
for i in range(1, n+1):
  for j in range(1, i):
    print(c, end=" ")
    c=chr(ord(c) + 1)
  print(" ")
