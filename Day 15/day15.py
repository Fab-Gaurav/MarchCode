# To find whether a number is Strong or not.

# Explaination :
# Strong number is a special number whose sum of factorial of digits 
# is equal to the original number. For example: 145 is strong number. Since, 1! + 4! + 5!.


def factorial(m):
	if m ==1:
		return 1
	return m*factorial(m-1)

def check_strong(n):
	sum = 0
	for i in n:
		i = int(i)
		sum += factorial(i)
	if sum == int(n):
		return True
	return False

n = input()
print(check_strong(n))