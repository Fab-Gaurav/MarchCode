//To Find the maximum and minimum number in an array.

#include<iostream>
using namespace std;
int main()
{
  int n=10, arr[n], maximum=-100000, minimum=100000;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    if(maximum<arr[i])
        maximum = arr[i];
    if(minimum>arr[i])
        minimum = arr[i];
  }
  cout<<"> Maximum : "<<maximum<<endl;
  cout<<"> Minimum : "<<minimum<<endl;
}
