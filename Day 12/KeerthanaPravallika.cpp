#include <iostream>
using namespace std;

int main()
{
    int n,m,c,f;
    cout<<"Enter two numbers : ";
    cin>>n>>m;
    for(int i=n;i<m;i++)
    {
        c = 2;
        f = 0;
        while(c <= (i/2))
        {
            if(i % c == 0){
                f = 1;
                break;
            }
            c++;
        }
        if(f == 0)
            cout<<i<<" ";
    }
    return 0;
}
