#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n%100==0){
        printf("valid amount");
    }
    else {
        printf("invalid amount");
    }
    
    return 0;
}