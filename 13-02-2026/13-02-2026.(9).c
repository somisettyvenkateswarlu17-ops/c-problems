#include <stdio.h>
int main() {
    //Your Code goes here!
    int plan_type,payment_mode;
    scanf("%d %d",&plan_type,&payment_mode);
     
     int cashback;
    
    switch(plan_type){
        case 1:
        switch(payment_mode){
            case 11:
            
                payment_mode=200-20;


                printf("%d",payment_mode);
                break;
            
            case 12:
            payment_mode=200-20;
            printf("%d",payment_mode);
            break;
            case 13:
            
            printf("%d",200);
            break;
        }
        break;
        case 2:
        switch(payment_mode){
            case 11:
           
                payment_mode=399-20;


                printf("%d",payment_mode);
                break;
            
            case 12:
            payment_mode=399-20;
            printf("%d",payment_mode);
            break;
             case 13:
            
            printf("%d",399);
            break;
            
        }
        break;
        default:
        printf("between in 1 and 2 only",payment_mode);

    }

    
    return 0;
}