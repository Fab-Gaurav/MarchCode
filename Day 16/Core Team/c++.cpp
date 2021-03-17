# include <iostream>
using namespace std;
int main (){
    int rem , number ,  num , reverse_number = 0   ; 
    cout<< "Enter the number "; 
    cin >> number ; 
    num = number ; 
    while (num > 0 ){
        rem = num % 10 ; 
        num  = num / 10 ; 
        reverse_number  = reverse_number * 10 + rem ;
        
    }
    if (number == reverse_number){
        cout<<"The number is a palindrome ";
    
    }
    else {
        cout<<"The number is not a palindrome " ; 
    }
    return 0 ; 
    
}