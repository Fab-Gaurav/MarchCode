#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int b=n;
    int a=0;
    while(n!=0){
        a=a*10+n%10;
        n/=10;
    }
    if(a==b){
        cout<<"Given Number is a palindromic Number";
    }else{
        cout<<"Given Number is not a palindromic Number";
    }
}