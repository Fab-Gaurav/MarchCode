#include <iostream>
using namespace std ; 
int main()
{
    int num , rem , sum =0  ; 
    cout<<"Enter the number you want to check :";
    cin>>num; 
    while (num >0 ){
        rem = num %10 ; 
        num = num / 10 ; 
        int fact = 1 ;
        for (int i = 1 ; i < rem + 1 ; i++){
            fact = fact *i;
        }
        sum = sum +fact ;
    }
    if (sum == num ){cout<<"The number is a strong number ";}
    else {cout<<("The number is not a strong number ";}
    return 0 ; 
}
