#include<iostream>
using namespace std;

int main()
{
    int n,a=65;
    cout<<"enter the no. of lines: "; cin>>n;

    for( int i=0; i<n; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout<<(char)a<<"  ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}
