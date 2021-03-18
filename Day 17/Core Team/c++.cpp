#include <iostream>
using namespace std ;
int main() {
    int z , n , x=0 ,y=1;
    cout<<"Enter the numbers you want in the series : ";
    cin>> n; 
    cout<<"Fibonacci Series :";
    cout<<x <<" "<<y;
    while ((x+y)<n-2){
        z = x+y;
        cout<<" "<<z;
        x = y ;
        y = z;
    }
    
    return 0 ;
}