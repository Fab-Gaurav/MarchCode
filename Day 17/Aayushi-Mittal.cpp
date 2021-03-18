// To print fibonacci series upto a given number n.

#include<iostream>
using namespace std;
int main()
{
  int n, first = 0, second = 1, next;
  cin>>n;
  cout<<"Fibbonacci Series:"<<endl;
  for(int i=0; i<n; i++)
  {
    cout<<first<<", ";
    next = second + first;
    first = second;
    second = next;
  }
}
