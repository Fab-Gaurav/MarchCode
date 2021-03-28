//WAP using a function to find the factorial of a number using recursion.

#include<iostream>
using namespace std;
long factorial(int n)
{
  long fact=1;
  for(int i=2; i<=n; i++)
    fact *= i;
  return fact;
}
int main()
{
  int n;
  cin>>n;
  cout<<n<<"!: "<<factorial(n);
}
