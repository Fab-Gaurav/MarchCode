#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    int a[10];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int s=INT_MAX;
    int l=INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i]<s){
            s=a[i];
        }
        if(a[i]>l){
            l=a[i];
        }
    }
    cout<<"The Maximum no. in the array is : "<<l<<endl<<"The Minimum no. in the array is : "<<s;
    return 0;
}
