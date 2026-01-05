#include <stdio.h>
int main() {
    //Your Code goes here!
    int arr[50];
    int n;
    int i,e,k=0;
   
    

    scanf("%d",&n);
    for(  i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
      
        scanf("%d",&e);
        for(  i=0;i<n;i++){
            if(arr[i]==e){
                k==1;
                break;
            }
        
    }

        if(k==e){
        printf("found");
    }
    else {
        printf("not found");
    }
    
    
        
    
    return 0;
}