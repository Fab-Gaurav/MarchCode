#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int b=n;
    long sum=0;
    while(b!=0){
        int a=b%10;
        b/=10;
        int ans=1;
        for(int i=2;i<=a;i++){
            ans*=i;
        }
        sum+=(long)ans;
    }
    if(sum==(long)n){
        cout<<"Given Number is a Strong Number";
    }else{
        cout<<"Given number is not a Strong Number";
    }
}