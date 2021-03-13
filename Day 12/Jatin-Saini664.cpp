#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    for(int i=n;i<=m;i++){
        bool isPrime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime)
            cout<<i<<' ';
    }
}