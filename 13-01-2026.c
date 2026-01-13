#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,k;
    scanf("%d %d",&n,&k);
    int sum=1;
    for(int i=1;i<=k;i++){
    sum=sum*n;
    }

       

    
    printf("%d",sum);
    
    return 0;
}