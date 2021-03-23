#include<iostream>
using namespace std; 

int main() {
    int n , alpha = 65; 
    cout<<"Enter the number of rows you want :";
    cin>> n ; 
    for (int i = 1 ; i <= n ; i++ ){
        for (int j =0 ; j < i ; j++){
            cout<< char(alpha); 
            alpha ++; 
            
        }
        cout<<"\n";
    }
    return 0 ; 
}