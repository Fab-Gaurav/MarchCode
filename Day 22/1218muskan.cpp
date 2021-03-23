#include<iostream>
using namespace std;

int main()
{
    int n,arr[15],maxm,minm;
    cout<<"enter the no. of elements in array: "; cin>>n;
    cout<<"input array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxm=minm=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxm)
            maxm=arr[i];
        if(arr[i]<minm)
            minm=arr[i];
    }
    cout<<"\n maximum no. is "<<maxm;
    cout<<"\n minimum no. is "<<minm;
    return 0;
}
