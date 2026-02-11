#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
    printf("enter the number\n",number);
    scanf("%d",&number);
    if(number<=100&&number>=99){
        printf("it is a three digits number");
    }
    else {
        printf(" not it is a three digits number");
    }
    return 0;
}