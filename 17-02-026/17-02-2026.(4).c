#include <stdio.h>
int main() {
    //Your Code goes here!
    int role,long_type;
    scanf("%d %d",&role,&long_type);
    switch(role){
        case 1:
        printf("%d-full acess ",long_type);
        break;
        case 2:
        if(long_type>=9&&long_type<=18){
            printf("limited acess",long_type);
        }
        else {
            printf("acess denied",long_type);
        }
        break;
        default:
        printf("in cases 1 and 2",role);
    }

    return 0;
}