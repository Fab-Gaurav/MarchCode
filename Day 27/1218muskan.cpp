#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1;

    else
        return n*factorial(n-1);
}

int main()
{
    int num;
    cout<<"enter any number to find factorial: ";
    cin>>num;

    if(num<0)
        cout<<"factorial does not exists";
    else
        {  if(num==0)
             cout<<"factorial of 0 is 1";
           else
            cout<<"factorial of "<<num<<" is "<<factorial(num);
        }

    return 0;
}
