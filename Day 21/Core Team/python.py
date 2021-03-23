n = int (input("Enter the numbr of rows you want : "))

alpha = 65

for i in range (n):
    
    for j in range (i+1):
        
        print(chr(alpha), end = " ")
        alpha = alpha + 1     
    print("")