n = int(input("Enter the lowe limit : "))
m = int(input("Enter the upper limit : "))
print("The prime numbers between" , n , "and" , m, "are")
for  i in range(n,m,1):
    
    a = 0 
    for j in range (1,i+1,1):
        if (i%j==0):
            a = a+ 1 
        
    if (a==2):
        print(j)