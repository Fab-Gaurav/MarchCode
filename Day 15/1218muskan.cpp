#include<iostream>
using namespace std;

int factorial(int a)
{
    int i,prod=1;
    for (i=1; i<=a; i++)
        prod=prod*i;

    return prod;
}

int main()
{
    int num,r,sum=0;
    cout<<"enter any number: ";  cin>>num;
    int save=num;
    while(num!=0)
    {
        r=num%10;
        sum += factorial(r);
        num=num/10;
    }
    if(save==sum)
        cout<<save<<" is a strong number";
    else
        cout<<save<<" is not a strong number";

    return 0;
}
