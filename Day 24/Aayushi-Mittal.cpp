//To print all the unique elements in an array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, arr[n];
  cin>>n;
  for(int i=0; i<n; i++)
    cin>>arr[i];
  sort(arr, arr+n);
  cout<<"Unique elements in the array: ";
  for(int i=0; i<n; i++)
  {
    if(arr[i+1]!=arr[i] && i+1<n)
      cout<<arr[i]<<", ";
  }
}
