
#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter n value : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
