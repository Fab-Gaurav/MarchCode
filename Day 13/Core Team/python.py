number = int(input("Enter the number :  "))
sum = 0

temp = number
while temp > 0:
   digit = temp % 10
   sum = sum + digit ** 3
   temp = temp // 10

if number == sum:
   print("{} is an Armstrong number".format(number))
else:
   print("{} is not an Armstrong number".format(number))