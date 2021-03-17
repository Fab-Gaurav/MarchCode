# To find whether a number is Strong or not.

num=0
factorial=1 
numsum=0;
num = int(input())
n=num;
while (n>0):
        ld=n%10
        if ld!=0:
           factorial=1
           for i in range(1, ld+1):
               factorial*=i
        else:
           ld=1
        numsum+=factorial
        n=n//10
if numsum==num :
  print("> ", num , " is a strong number.")
else:
  print("> ", num , " is not a strong number.")
