//To count the total number of odd and even numbers in array.

#include<iostream>
using namespace std;
int main()
{
  int n=10, arr[n], even=0, odd=0;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    if(arr[i]%2==0)
        even++;
    else
        odd++;
  }
  cout<<"> No of even elements in the array : "<<even<<endl;
  cout<<"> No of odd elements in the array : "<<odd<<endl;
}
