#include <stdio.h>
int main() {
    //Your Code goes here!
    int n ,i;
    int count;
    int arr[50];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    count=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]%2!=0){
             count++;
        }
            
           
            
        
    }
    printf("%d",count);
    
    
    return 0;
}