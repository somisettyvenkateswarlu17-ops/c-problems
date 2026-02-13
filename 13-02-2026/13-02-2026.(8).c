#include <stdio.h>
int main() {
    //Your Code goes here!
    int plan_type,payment_mode;
    scanf("%d %d",&plan_type,&payment_mode);
     
     int final_amount;
     int plan_cost;
      scanf("%d",&plan_cost);
    switch(plan_type){
        case 1:
        switch(payment_mode){
            case 1:
            if(plan_cost==199&&payment_mode==11||payment_mode==12){
              final_amount=plan_cost-20;
              printf("%d",final_amount);
            }
           
            else {
                printf("%d",plan_cost);
            }
            break;
            

            
            case 2:
            if(plan_cost==399&&payment_mode==11||payment_mode==12){
              final_amount=plan_cost-20;
              printf("%d",final_amount);
            }
           
            else {
                printf("%d",plan_cost);
            }
            break;
    }

            

        

        
    }
    return 0;
}