#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    printf("enter the number",a);
    scanf("%d",&a);
    if(a%3==0&&a%7==0){
        printf("mutiple by both 3 and 7");
    }
    else {
        printf(" not mutiple by both 3 and 7");
    }

    return 0;
}