#include <stdio.h>
int main() {
    //Your Code goes here!
    int age;
    printf("enter the number\n",age);
    scanf("%d",&age);
    if(age>=18){
        printf("eligible for voting");
    }
    else {
        printf("you are the minor ");
    }
    return 0;
}