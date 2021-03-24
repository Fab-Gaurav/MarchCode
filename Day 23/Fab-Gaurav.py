"""
Original file is located at
    https://colab.research.google.com/drive/1pHKx4aR51KxZ1a1SOxusPkMCkYF8aGm4
"""

def eon(n):
    count_even = 0
    count_odd = 0
    for i in range(len(n)) :
        if n[i] % 2 == 0:
            count_even+=1
        else:
            count_odd +=1
    print(f"Total number of even elements : {count_even}")
    print(f"Total number of odd elements : {count_odd}")

n = list(map(int , input("Enter the elements : ").split()))
eon(n)
