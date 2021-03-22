/*
Write a program to print the pattern upto n number
1	
2 2	
3 3 3	
n n n n . . . . n times	
*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<i; j++)
    {
      cout<<i<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
