#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    printf("enter the number",n);
    scanf("%d",&n);
    if(n>10&&n<20){
        printf("number is within range");
    }
    else{
        printf("not in within range");
    }
    return 0;
}