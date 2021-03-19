"""
Original file is located at
    https://colab.research.google.com/drive/14nxh64saCMlCL3ff_fKlABCXIAdNoF1K
"""

def upper(matrix, row, col):  
    for i in range(0, row):      
        for j in range(0, col):          
            if (i > j): 
                print("0", end = " ");              
            else: 
                print(matrix[i][j],  
                       end = " " );          
        print(""); 

  
matrix = [[1, 2, 3],  
          [4, 5, 6],  
          [7, 8, 9]]; 
row = 3; 
col = 3;

print("Upper triangular matrix: "); 
upper(matrix, row, col);
