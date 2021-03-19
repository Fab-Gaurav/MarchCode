#include<iostream>
using namespace std;

void upper_triangular(int a[][10], int r , int c)
{
    cout<<"\n Upper Triangular: \n";

    for(int i=0;i<r; i++)
  {
      for(int j=0; j<c; j++)
      {
          if (i<=j)
            cout<<a[i][j]<<"\t";
          else
            cout<<"0\t";


      }
      cout<<endl;
  }
}

int main()
{
  int r,c,a[10][10],i,j;
  cout<<"Enter the no. of rows of matrix: "; cin>>r;
  cout<<"Enter the no. of columns of matrix: "; cin>>c;
  cout<<"\n Enter Matrix: \n";

  for(i=0;i<r; i++)
  {
      for(j=0; j<c; j++)
      {
          cout<<"a["<<i<<"]["<<j<<"]= ";
          cin>>a[i][j];
      }
  }

  upper_triangular(a,r,c);
  return 0;
}
