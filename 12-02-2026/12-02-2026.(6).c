#include <stdio.h>
int main() {
    //Your Code goes here!
    int degree;
    scanf("%d",&degree);
    if(degree<=20){
        printf("cold");
    }
    else if(degree>=20&&degree<=30){
        printf("normal");
    }
    else {
        printf("hot");
    }


    return 0;
}