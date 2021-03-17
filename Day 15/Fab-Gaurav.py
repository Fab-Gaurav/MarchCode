"""
Original file is located at
    https://colab.research.google.com/drive/13godSF_f5ej56m-yTNFYekFQksNiL4JA
"""


sum=0
num=int(input("Enter a number:"))
temp=num

while (num):
    i=1
    fac=1
    rem=num%10
    while(i<=rem):
        fac=fac*i
        i=i+1
    sum=sum+fac
    num=num//10

if (sum==temp):
    print("%d is a strong number" %temp)
else:
    print("%d is not a strong number" %temp)
