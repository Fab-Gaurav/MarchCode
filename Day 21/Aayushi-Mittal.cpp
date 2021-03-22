/*
Write a program to print the pattern upto n lines
A	
B C	
D E F ... Upto n lines
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  char c='A';
  cin>>n;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<i; j++)
    {
      cout<<c<<" ";
      c++;
    }
    cout<<"\n";
  }
}
