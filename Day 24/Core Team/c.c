# include <stdio.h>

int main (){
    int arr[10] = { 5,3,5,2,41,4,3,1,4,4 };
    
    
    
    for (int i = 0 ; i< 10  ; i++){
        if (arr[i]!= -1){
            for (int j = i+1; j < 10; j++){
                if (arr[i]== arr[j]){
                    arr[j] = -1;
                }
               
                
            }
            printf("%d   ",arr[i]);
           
        }
        
    }
}