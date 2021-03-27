#include<iostream>
using namespace std;
template <class Tmp>
void swapping(Tmp &x,Tmp &y)
{
    Tmp z;
    z=x;
    x=y;
    y=z;
}
int main( )
{
    float p,q;
    cout<<"Enter two float numbers: ";
    cin>>p>>q;
    cout<<"\n Before calling swap function : ";
    cout<<"p = "<<p;
    cout<<" q = "<<q;
    cout<<"\n After calling swap function : ";
    swapping(p,q);
    cout<<"p = "<<p;
    cout<<" q = "<<q;
    int a,b;
    cout<<"\n Enter two Integers : ";
    cin>>a>>b;
    cout<<"\n Before calling swap function : ";
    cout<<"a = "<<a;
    cout<<" b = "<<b;
    swapping(a,b);
    cout<<"\n After calling swap function : ";
    cout<<"a = "<<a;
    cout<<" b = "<<b;
    return 0;
   
}
