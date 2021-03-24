l = [int(x) for x in input().split()]
e = 0
o = 0
for i in l:
    if i % 2 == 0:
        e += 1
    else:
        o += 1
print("No of even numbers in array : "+str(e))
print("No of odd numbers in array : "+str(o))
