#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    printf("enter the number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180){
        printf("it is a triangle");
    }
    else {
        printf("not a triangle");
    }
  
    return 0;
}