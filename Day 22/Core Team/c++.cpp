# include <iostream>
using namespace std;

int main (){
    int max , min ; 
    int arr [5] = {3,1,5,2,9};
    max = min = arr [0];
    
    for (int i = 0 ; i< 5 ; i++){
        if (min > arr[i] ){
            min = arr[i];
            
            
        }
        if (max < arr [i]){
            max = arr[i];
        }
    }
    cout<< "The max element in the array is :"<< max <<"\n"; 
    cout<< "The min element in the array is : "<< min << "\n"; 
    
    return 0 ; 
}