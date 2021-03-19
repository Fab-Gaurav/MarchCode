 #include<iostream>
 using namespace std;

 void upper(int mat[3][3],int row,int col)
 {
   int i,j;
   for(i=0;i<row;i++){
     for(j=0;j<col;j++){
      if(i>j)
       cout<<"0"<<" ";
     else
       cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }
 }
 int main(){
 int mat[3][3] ={{9,8,7},
           {6,5,4},
           {3,2,1}
           };
 int r=3,c=3;
 cout << "Upper triangular matrix: \n";
    upper(mat,r,c);

    return 0;

}
