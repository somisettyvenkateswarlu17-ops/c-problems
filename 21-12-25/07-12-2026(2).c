#include <stdio.h>
int main() {
    //Your Code goes here!
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } int x=0;
    x=size/2;
    

    for(int i=0;i<size;i++){
        if(arr[i]>x){
printf("%d ",arr[i]);

        }
        
            
        
    }
    
    
    
    return 0;
}