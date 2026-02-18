#include <stdio.h>
int main() {
    //Your Code goes here!
    int duration_type,month;
    scanf("%d %d",&duration_type,&month);
    switch(duration_type){
        case 1:
        month=1;
        printf("%d-membership fee 1500",month);
        break;
        case 2:
        month=3;
        printf("%d-membership fee 4000",month);
        break;
        case 3:
        month=6;
        printf("%d-membership fee 7000 ",month);
        break;
        default:
        printf("in between the 1 and 3",duration_type);
    }
    return 0;
}