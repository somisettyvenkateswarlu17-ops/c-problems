#include <stdio.h>
int main() {
    //Your Code goes here!
    int role_identification;
    scanf("%d",&role_identification);
    if(role_identification==1){
        printf("admin",role_identification);
    }
    else if(role_identification==1){
        printf("user",role_identification);
    }
    else if(role_identification==2){
        printf("user",role_identification);
    }
    else if(role_identification==3){
        printf("guest",role_identification);
    }
    else{
        printf("invalid input");
    }
    return 0;
}