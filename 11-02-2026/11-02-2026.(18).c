#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    printf("enter the number",n);
    scanf("%d",&n);
    if(n%11==0){
        printf("divisible by 11");
    }
    else {
        printf("not divisible by 11");
    }
    return 0;
}