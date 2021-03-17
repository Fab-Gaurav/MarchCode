# include <stdio.h>
int main (){
    int rem , number ,  num , reverse_number = 0   ; 
    printf("Enter the number "); 
    scanf("%d",  &number) ; 
    num = number ; 
    while (num > 0 ){
        rem = num % 10 ; 
        num  = num / 10 ; 
        reverse_number  = reverse_number * 10 + rem ;
        
    }
    if (number == reverse_number){
        printf("The number is a palindrome ");
    
    }
    else {
        printf("The number is not a palindrome ") ; 
    }
    return 0 ; 
    
}