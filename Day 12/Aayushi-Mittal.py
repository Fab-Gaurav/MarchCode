#  To find the all the prime numbers between ( n and m )
n = int(input())
m = int(input())
for i in range(n, m+1):
  isPrime=1;
  for i in range(2, m/2):
    if i%j == 0:
      isPrime==0
  if(isPrime == 1):
    print(i, "is a prime number.")
