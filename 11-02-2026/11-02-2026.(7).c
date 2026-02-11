#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    printf("enter the number",a);
    scanf("%d",&a);
    if(a%2==0){
        printf("even");
    }
    else if (a%2!=0){
        printf("odd");
    }
    else {
        printf("neutral");
    }
    return 0;
}