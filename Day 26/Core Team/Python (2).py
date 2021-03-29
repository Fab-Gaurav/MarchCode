def swap(a,b):
    a,b=b,a
    print("Swapped values are : ",a," ",b )

x,y=input("Enter the two numbers : ").split()
print("Before swapping : ",x," ",y)

swap(int(x),int(y))