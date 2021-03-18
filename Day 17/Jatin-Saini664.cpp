#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0, b=1, c=0;
    while(n-2>0){
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    cout<<c<<" ";
}