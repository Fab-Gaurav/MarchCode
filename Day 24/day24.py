# To print all the unique elements in an array.
def uni_nums(n):
    ans = []
    for i in n:
        if i not in ans:
            ans.append(i)
    return ans

n = list(map(int,input().split()))
print(uni_nums(n))