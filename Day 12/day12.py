#  "To find the all the prime numbers between ( n and m )"
def find_prime_numbers(n,m):
	prime_numbers = []
	for i in range(n,m+1):
		for j in range(2,i):
			if i%j == 0:
				break
		else:
			prime_numbers.append(i)
	return prime_numbers

n = int(input())
m = int(input())
print(find_prime_numbers(n,m))



