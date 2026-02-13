#include <stdio.h>
int main() {
    //Your Code goes here!
    int account_type,balance,withdraw;
    scanf("%d %d %d",&account_type,&balance,&withdraw);
    switch (account_type){
        case 1:
        printf("\n=====saving account====\n",account_type);
        if(balance>=withdraw){
            printf("transcation sucessful",withdraw);
        }
        else {
            printf("limit excceeded",withdraw);
        }
        break;
        case 2:
        printf("\n====current account\n",account_type);
        if(balance>=withdraw&&withdraw>5000){
            printf ("limit execeded",withdraw);
        }
        else {
            printf("transication sucessful ",withdraw);
        }
        break;
        default:
            printf("between 1 nad 2",account_type);
        

    }
    
    return 0;
}