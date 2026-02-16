#include <stdio.h>
int main() {
    //Your Code goes here!
     int e,code;
     scanf("%d %d",&code,&e);
     int amount;
     switch(code){
        case 1:
        if(e>=3){
            amount=50000;
            e=e*5000;
            e+=amount;
             printf("%d",e);
        }
        else {
            printf("%d",amount);
        }
        break;
        case 2:
        if(e>=3){
             amount=35000;
            e*=5000+amount;

            

            printf("%d",e);

        }
        else{
            printf("%d",amount);
        }
        break;
        default:
        printf("in between two cases only",e);
     }
    return 0;
}