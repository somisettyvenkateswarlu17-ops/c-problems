#include <stdio.h>
int main() {
    //Your Code goes here!
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } int max=arr[0];
    int second=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            second=max;
            max=arr[i];}
        
            else{
            second=arr[i];
            }
              
        
    }
        
         printf("%d ",second);
        
    
    
    return 0;
}