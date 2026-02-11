#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    printf("enter the number",a,b);
    scanf("%d %d",&a,&b);
    if(a>b||b>a){
        printf(" %d isgreater");
    }
    else {
        printf("%d is lessthan");
    }
    return 0;
}