// To print a the lower triangle matrix.

#include<iostream>
using namespace std;
int main()
{
  int m=10, n=10, mat[m][n];
  cout<<"Enter the number of rows and column: ";
  cin>>m>>n;
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(i>=j)
      {
        cout<<"mat["<<m<<"]["<<n<<"] :"; 
        cin>>mat[i][j];
      }
      else
        mat[i][j]=0;
    }
  }
  cout<<"mat["<<m<<"]["<<n<<"] :"<<endl;
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<"\n";
  }
}
