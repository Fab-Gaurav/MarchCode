#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int c[n+m], k=0;

    for(int i=0;i<n;i++){
        c[k]=a[i];
        k++;
    }

    for(int i=0;i<m;i++){
        c[k]=b[i];
        k++;
    }

    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
}