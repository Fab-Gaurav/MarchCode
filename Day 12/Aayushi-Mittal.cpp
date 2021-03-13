// To find the all the prime numbers between ( n and m )

#include<iostream>
using namespace std;
int main()
{
  int n, m, isPrime=1;
  cin>>n>>m;
  for(int i=n; i=<m; i++)
  {
    for(int j = 2; j <= m / 2; ++j) 
    {
           if (n % i == 0) {
                isPrime = 0;
                break;
            }
    }
    if(isPrime == 1)
      cout<<i<<" is a prime number."<<endl;
  }
}
