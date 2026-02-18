#include <stdio.h>
int main() {
    //Your Code goes here!
    int call_type,min;
    scanf("%d %d",&call_type,&min);
    switch(call_type){
        case 1:
        min=min*1;
        printf("%d",min);
        break;
        case 2:
        min=min*3;
        printf("%d",min);
        break;
        case 3:
        min=min*10;
        printf("%d",min);
        break;
        default:
        printf("case in between 1 nad 3",call_type);
    }
    return 0;
}