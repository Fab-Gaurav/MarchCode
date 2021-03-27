#include<iostream>
using namespace std;

void swap_no(int&a, int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x,y;
    cout<<"Before Swapping: \n";
    cout<<"x= ";  cin>>x;
    cout<<"y= ";  cin>>y;

    swap_no(x,y);
    cout<<"\nAfter Swapping: \n";
    cout<<"x= "<<x;
    cout<<"\ny= "<<y;
    return 0;
}
