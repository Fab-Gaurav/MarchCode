#include<iostream>
using namespace std;

int main()
{
    int n,arr[15],even=0,odd=0;
    cout<<"enter the no. of elements in array: "; cin>>n;
    cout<<"input array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    cout<<"\n total even numbers are "<<even;
    cout<<"\n total odd numbers are "<<odd;
    return 0;
}

