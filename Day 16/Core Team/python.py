number = int (input ("Enter the number you want to check "))
num = number 
rev_num = 0 
while (num > 0 ):
    rem = num %10 
    num = num // 10
    rev_num = rev_num*10 + rem
    

    
if (rev_num == number ):
    
    print("The number is a palindrome ")
else : 
    print("The number is not a palindrome ")
