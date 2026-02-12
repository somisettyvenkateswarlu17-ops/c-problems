#include <stdio.h>
int main() {
    //Your Code goes here!
    int amount ;
    scanf("%d",&amount);
    if(amount>=1000){
        printf("discount applied",amount);
    }
    else {
        printf("no discount",amount);
    }
    return 0;
}