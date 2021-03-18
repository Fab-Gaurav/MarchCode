#include<iostream>
using namespace std;

int main()
{
    int n,t1=0,t2=1,t3;
    cout<<"enter any number: "; cin>>n;

    cout<<"\n Fibonacci series: \n";
    cout<<t1<<" "<<t2;

    while((t1+t2)<n)
    {
        t3=t1+t2;
        cout<<" "<<t3;
        t1=t2;
        t2=t3;
    }

    return 0;
}
