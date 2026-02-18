#include <stdio.h>
int main() {
    //Your Code goes here!
    int connection_type,units;
    scanf("%d %d",&connection_type,&units);
    switch(connection_type){
        case 1:
        if(units<30){
            units=units*5;
            printf("amount=%d",units);
        }
        else{
            printf("amount=%d",units);
        }
        break;
        case 2:
        units=units*10;
        printf("%d",units);
        break;
        default:
        printf("case 1 and 2",connection_type);

    }
    return 0;
}