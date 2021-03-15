# To find whether a number is Perfect or not.
# Explaination : "Perfect number, a positive integer that 
# is equal to the sum of its proper divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3"

def check_perfect_number(n):
	sum = 0
	for i in range(1,n):
		if n%i == 0:
			sum+=i
	if sum == n:
		return True
	return False


n = int(input())
print(check_perfect_number(n))



