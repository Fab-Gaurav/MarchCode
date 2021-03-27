#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout<< "Please enter the number of rows: ";
    cin>>r;
    cout<< "\nPlease enter the nummber of columns: ";
    cin>>c;
    int mat[r][c];
    cout<<"\nPlease enter the elements of the matrix :\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout << "Upper triangular matrix will be: \n";
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        if(i>j)
          cout<<"0"<<" ";
        else
          cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }

    return 0;

}