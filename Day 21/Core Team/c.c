# include <stdio.h>

int main (){
    int n , alpha = 65  ;
    printf("Enter the number of rows you want : ");
    scanf("%d", &n); 
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 0 ; j<i ; j ++){
            printf("%c" , alpha);
            printf(" ");
            alpha++ ; 
        }
        printf("\n");
    }
    return 0 ; 
    
    
}