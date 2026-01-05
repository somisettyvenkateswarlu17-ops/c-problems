#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    int arr[100];
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        
        scanf("%d ",&arr[i]);
      sum=sum+arr[i];
    }
    printf("%d",sum);
    
    return 0;
}