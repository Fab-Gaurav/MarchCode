# To print upper triangle matrix.

m = int(input())
n = int(input())
mat=[]
for i in range(0, m): 
  l=[]
  for j in range(0, n): 
    if j<n-i:
      print(f"mat[{i}][{j}] : ")
      e = int(input()) 
    else:
      print(f"mat[{i}][{j}] : 0")
      e = 0
    l.append(e)
  mat.append(l)

for i in range(0, m): 
  for j in range(0, n): 
    print(mat[i][j], end = " ") 
  print()
