# To print fibonacci series upto a given number n.

first = 0
second = 1
n = int(input())
print("Fibbonacci Series:")
for i in range(0,n):
    print(first, end=", ")
    next = second + first
    first = second
    second = next
