#include <stdio.h>
int main() {
    //Your Code goes here!
    char n;
    printf("enter the ASCII",n);
    scanf("%c",&n);
    if(n>='0'&&n<='9'){
        printf("  digit");
    }
    else {
        printf("in valid");
    }
    return 0;
}