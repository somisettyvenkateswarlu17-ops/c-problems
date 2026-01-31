#include <stdio.h>
int main() {
    //Your Code goes here!
    int i,n;
    int fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    } printf("%d",fact);
    
    return 0;
}