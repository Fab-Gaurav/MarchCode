#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, max=INT_MIN, min=INT_MAX;
  cout<<"How many numbers you want to add?"<<endl;
  cin>>n;
  int ar[n];
  cout<<"Enter the numbers"<<endl;
  for(int i=0; i<n; i++)
  {
    cin>>ar[i];
    if(ar[i]>max)
      max=ar[i];
    if(ar[i]<min)
      min=ar[i];
  }
  cout<<"Maximum number in the array is "<<max;
  cout<<"Minimum number in the array is "<<min;
  return 0;
}