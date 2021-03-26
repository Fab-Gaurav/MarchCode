//To merge 2 array into a third array.
#include<iostream>
using namespace std;
int main()
{
  int i, n=4, m=4, arr1[n], arr2[m], arr[m+n];
  cin>>n;
  for(int i=0; i<n; i++)
    cin>>arr1[i];
  cin>>m;
  for(int i=0; i<m; i++)
    cin>>arr2[i];
  for(int i=0; i<n; i++)
    arr[i]=arr1[i];
  for(int i=0; i<m; i++)
    arr[n+i]=arr2[i];
  cout<<"Mergerd array arr["<<m+n<<"] : ";
  for(int i=0; i<n+m; i++)
    cout<<arr[i]<<" ";
}
