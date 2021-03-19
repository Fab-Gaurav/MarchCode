#include <iostream>

using namespace std;

int main() {
    int i,j,r,c,val=1;
    cout<<"Enter number of rows and columns : ";
    cin>>r>>c;
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i > j)
                arr[i][j] = 0;
            else{
                arr[i][j] = val;
                val++;
            }
                
        }
    }
    for(i = 0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
