# To check Whether a number is palindrome or not
def check_palindrome(s):
	if s == s[::-1]:
		return True	
	else:
		return False
		
s= input()
print(check_palindrome(s))