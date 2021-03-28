//WAP using a function to find the factorial of a number using recursion.

#include<iostream>
using namespace std;
long factorial(int n)
{
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}
int main()
{
  int n;
  cin>>n;
  cout<<n<<"!: "<<factorial(n);
}
