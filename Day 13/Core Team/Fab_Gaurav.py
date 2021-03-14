"""
Original file is located at
    https://colab.research.google.com/drive/1mefUBAB2JybCjpqS63TCRqmybnXHN3nW
"""

num = int(input("Enter the number : "))
sum = 0

temp = num
while temp > 0:
   digit = temp % 10
   sum += digit ** 3
   temp //= 10

if num == sum:
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")
