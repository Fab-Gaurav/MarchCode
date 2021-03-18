# To print n number of fibonacci series.
def fibonacci_series(n):
	a = 0
	b = 1
	if a<0:
		return 
	print(a,end = " ")
	for i in range(1,n):
		print(b,end =" ")
		m = a+b
		a = b
		b = m



n = int(input())
fibonacci_series(n)
		