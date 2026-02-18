#include <stdio.h>
int main() {
    int customer_type,bill_amount;
    scanf("%d %d",&customer_type,&bill_amount);
    switch(customer_type){
        case 1:
          bill_amount=bill_amount*95/100;
          printf("%d",bill_amount);
          break;
          case 2:
          bill_amount=bill_amount*85/100;
          printf("%d",bill_amount);
          break;
          default:
          printf("in case 1 and 2",customer_type);
    }
    return 0;
}