# To count the total number of odd and even numbers in array
def num_odd_even(n):
    even = 0
    odd = 0
    for i in range(len(n)) :
        if n[i] % 2 == 0:
            even+=1
        else:
            odd +=1
    print(f"Number of even numbers: {even}")
    print(f"Number of odd numbers: {odd}")

n = list(map(int , input().split()))
num_odd_even(n)

