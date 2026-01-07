#include <stdio.h>
int main() {
     int size;
    scanf("%d",&size);
    int arr[size];
    int i;
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);}
        int temp=0;
       for (i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
         
    }
    
    for(i=0;i<size;i++){
    printf("%d ",arr[i]);}
    return 0;
        }
                
       