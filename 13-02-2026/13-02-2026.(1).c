#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("postive",n);
    }
    else if(n==0){
        printf("neutral",n);
    }
    else {
        printf("negative",n);
    }

    
    return 0;
}