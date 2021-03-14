#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int b=n, a1=n;
    int a=0, i=0;

    while(n!=0){
        i++;
        n/=10;
    }
    n=i;
    while(b!=0){
        a+=(int)(pow(b%10, n)+0.5);
        b/=10;
    }
    if(a==a1)
        cout<<"Given Number is Armstrong Number";
    else
        cout<<"Given Number is Not an Armstrong Number";
}