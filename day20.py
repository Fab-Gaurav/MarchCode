# Write a program to print the pattern upto n number

def pattern(n):
	for i in range(1,n+1):
		m = str(i)
		print(m*i)

	
n = int(input())
pattern(n)


