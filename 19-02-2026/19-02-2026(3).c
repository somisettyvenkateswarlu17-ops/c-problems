#include <stdio.h>
int main() {
    //Your Code goes here!
    int fule_type,quantity;
    scanf("%d %d",&fule_type,&quantity);
    switch(fule_type){
        case 1:
       quantity =quantity*105;
        printf("%d",quantity);
        break;
        case 2:
        quantity=quantity*460;
        printf("%d",quantity);
        break;
         case 3:
        quantity=quantity*85;
        printf("%d",quantity);
        break;
        default:
        printf("in case 1 and 2 only",fule_type);

    }
    return 0;
}