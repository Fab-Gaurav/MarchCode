#include<iostream>
using namespace std;

int main()
{
    int n,save,r,rev=0;
    cout<<"enter any number: "; cin>>n;
    save=n;
    while(n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
    }
    if(save==rev)
        cout<<save<<" is a palindrome";
    else
        cout<<save<<" is not a palindrome";

    return 0;
}
