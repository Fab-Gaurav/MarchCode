l1 = [int(x) for x in input().split()]
l2 = [int(x) for x in input().split()]
l3 = []
for i in l1:
    l3.append(i)
for i in l2:
    l3.append(i)
print(*l3)
