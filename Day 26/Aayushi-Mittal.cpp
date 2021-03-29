//WAP using functions to swap two numbers.

#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout<<"num1: "<<num1<<endl;
  cout<<"num2: "<<num2<<endl;
}
int main()
{
  int num1, num2, temp;
  cout<<"Enter two num1: ";
  cin>>num1;
  cout<<"Enter two num2: ";
  cin>>num2;
  swap(num1, num2);
}
