include <stdio.h>

int main()
{
    int num , rem , sum =0  ; 
    printf("Enter the number you want to check :");
    scanf("%d" , &num); 
    while (num >0 ){
        rem = num %10 ; 
        num = num / 10 ; 
        int fact = 1 ;
        for (int i = 1 ; i < rem + 1 ; i++){
            fact = fact *i;
        }
        sum = sum +fact ;
        
    }
    
    if (sum == num ){
        printf("The number is a strong number ");
        
    }
    else {
        printf("The number is not a strong number ");
    }
    return 0 ; 
}
