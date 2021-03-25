#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], n, ctr=0;
    int i, j, k;	
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Unique elements in the array are: ";
    for(i=0; i<n; i++){
        ctr=0;
        for(j=0,k=n; j<k+1; j++){
            if (i!=j){
		        if(arr[i]==arr[j]){
                 ctr++;
            }
         }
    }        
    
    if(ctr==0){
      cout<<arr[i]<<",";
     }
    }
    return 0;
}
