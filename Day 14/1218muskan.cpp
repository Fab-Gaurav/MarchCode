#include<iostream>
using namespace std;

void perfectNO(int n)
{
    int sum;
    if (n<=0)
        cout<<n<<" is not a perfect no.";
    else
    {
        sum=0;
        for(int i=1; i<n; i++)
            if(n%i==0)
                sum=sum+i;
    }

    if(sum==n)
        cout<<n<<" is perfect no.";
    else
        cout<<n<<" is not a perfect no.";
}

int main()
{
    int num;
    cout<<"enter any number: ";
    cin>>num;
    perfectNO(num);
    return 0;
}
