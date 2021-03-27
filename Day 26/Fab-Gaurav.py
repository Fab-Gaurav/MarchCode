"""
Original file is located at
    https://colab.research.google.com/drive/17DLj6rbQqMmEGiWWOLYdCngeRN-CKAhx
"""

def swap(a,b):
    a,b=b,a
    print("Swapped values are :    x =",a,"   y =",b)
    
x,y=input("Enter the two numbers : ").split()
print("")

print("Before swapping :    x =",x,"   y =",y)
print("")

swap(int(x),int(y))
