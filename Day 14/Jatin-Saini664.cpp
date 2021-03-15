#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long sum=1L;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=(long)i;
            sum+=(long)(n/i);
        }
    }
    if(sum==(long)n){
        cout<<"Given Number is perfect Number";        
    }else{
        cout<<"Given Number is not a perfect Number";
    }
}