#include<iostream>
using namespace std;

int main()
{
    int f1=0,f2=1,f3,c,n;
    cout<<"Enter n value : ";
    cin>>n;
    for(c= 2;c<n;c++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    cout<<f3;
}
