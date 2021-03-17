// To find whether a number is Palindrome or not.

#include<iostream>
using namespace std;
int main()
{
  int num, rev=0;
  cin>>num;
  for(int i=num; i!=0; i=i/10)
  {
    rev = rev*10 + (i%10);
  }
  if (num == rev)
    cout<<num<<" is a palindrome.";
  else
    cout<<num<<" is not a palindrome.";
}
