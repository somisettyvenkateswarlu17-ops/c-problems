#include <stdio.h>
int main() {
    //Your Code goes here!
    int bank_balance;
    scanf("%d",&bank_balance);
    if(bank_balance<1000){
        printf("low balance",bank_balance);
    }
    else {
        printf("sufficient balance",bank_balance);
    }
    
    return 0;
}