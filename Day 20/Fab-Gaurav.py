"""
Original file is located at
    https://colab.research.google.com/drive/1SDQ5R9-5k-zbnw0FP872gxLq33OTtJGg
"""

n=int(input("Enter any number: "))
for i in range(1,n+1):
    for j in range(i,0,-1):
        print(i,end=" ")
    print()
