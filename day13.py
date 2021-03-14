# To find whether a number is armstrong or not.
def check_armstrong(n):
	sum = 0
	for i in n:
		i = int(i)
		z = i**3		
		sum+=z	
	if sum == int(n):
		return True
	else:
		return False


n = input()
print(check_armstrong(n))

