#include <iostream>
using namespace std ;
int main() {
    int z , n , x=0 ,y=1;
    cout<<"Enter the numbers you want in the series : ";
    cin>> n; 
    if(n<=0)
        return 0;
    cout<<"Fibonacci Series :";
    if(n==1){
        cout<<x;
        return 0;
    }
    cout<<x <<" "<<y;
    while (n-->2){
        z = x+y;
        cout<<" "<<z;
        x = y ;
        y = z;
    }
    
    return 0 ;
}