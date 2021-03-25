arr = [ 5,3,5,2,41,4,3,1,4,4 ]
for i in range(10):
    if (arr[i]!= -1):
        for j in range (i+1, 10):
            if (arr[i] == arr[j]):
                arr[j] = -1
                
        print(arr[i], end = ' ')