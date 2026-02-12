#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n>10){
        printf("regular ticket",n);
    }
    else {
        printf("discount ticket",n );
    }
    return 0;
}