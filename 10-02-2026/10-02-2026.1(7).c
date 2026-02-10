#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("greater");
    }
    else if(a<b){
        printf("lessthan");
    }
    else {
        printf("equal");
    }
    return 0;
}