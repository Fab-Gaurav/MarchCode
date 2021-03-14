#include <iostream>
using namespace std;

int main()
{
    int num,digit,sum=0,tmp;
    cout<<"Enter the number : ";
    cin>>num;
    tmp = num;
    while(tmp != 0)
    {
        digit = tmp % 10;
        sum += digit*digit*digit;
        tmp = tmp /10;
    }
    if(num == sum)
        cout<<"It is an armstrong number";
    else
        cout<<"It is not an armstrong number";

    return 0;
}