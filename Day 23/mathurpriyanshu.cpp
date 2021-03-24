#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers you want to add?"<<endl;
  cin>>n;
  int ar[n], even=0, odd=0;
  cout<<"Enter the numbers"<<endl;
  for(int i=0; i<n; i++)
  {
    cin>>ar[i];
    if(ar[i]%2)
      odd++;
    else
      even++;
  }
  cout<<"Number of even elements are "<<even<<endl;  
  cout<<"Number of odd elements are "<<odd<<endl;  
}