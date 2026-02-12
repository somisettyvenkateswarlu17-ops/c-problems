#include <stdio.h>
int main() {
    //Your Code goes here!
    int password;
    scanf("%d",&password);
    if( password>=8){
        printf("strong password");
    }
    else {
        printf("weak password");
    }
    return 0;
}