// To find whether a number is Perfect or not.

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0, i, sum=0;
    cout<<"enter a number : "<<num<<endl;
    cin>>num;
    for(i=1; i<num; i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if (sum==num)
      cout<<sum<<" is a perfect number."<<endl;
    else
      cout<<num<<" is not a perfect number."<<endl;
    return 0;
}
