#include <stdio.h>
int main() {
    //Your Code goes here!
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } for(int i=0;i<size;i++){
        sum=sum+arr[i];

    }
    float avg=sum/size;
printf("%.2f",avg);
    
    
    return 0;
}