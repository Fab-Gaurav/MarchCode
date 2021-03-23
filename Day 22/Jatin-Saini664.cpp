#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n, 0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=INT_MIN, mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>mx)
            mx=a[i];
        else if(a[i]<mn)
            mn=a[i];
    }
    cout<<mx<<" "<<mn;
}