#include <iostream>
using namespace std;

int main()
{
    int num,d,sumt=0,tmp;
    cout<<"Enter the number : ";
    cin>>num;
    tmp = num;
    while(tmp != 0)
    {
        d = tmp % 10;
        sumt += d*d*d;
        tmp = tmp /10;
    }
    if(num == sumt)
        cout<<"It is armstrong number";
    else
        cout<<"It is not a armstrong number";

    return 0;
}
