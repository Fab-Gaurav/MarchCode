#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j;
    cout<<"enter the number to print the pattern upto that number: ";
    cin>>n;
    while(i<=n)
    {
        j=i;
        while(j>0)
        {
           cout<<i<<"\t";
           j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
