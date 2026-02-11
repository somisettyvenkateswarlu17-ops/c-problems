#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
     scanf("%d",&a,&b);
     if(a & (a-1)==0){
     printf("yes");
     }
     else {
        printf("no");
     }
    return 0;
}