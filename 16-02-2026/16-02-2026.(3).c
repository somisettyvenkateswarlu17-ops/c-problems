#include <stdio.h>
int main() {
    //Your Code goes here!
    int vehicle_type,trips;
    scanf("%d %d",&vehicle_type,&trips);
    int amount;
    
    switch(vehicle_type){
        case 1:
        if(trips==1){
            amount=100;
            printf("Car, single trip=%d",amount);
        }
        else if(trips>=5&&trips<=10){
            amount=800;
            printf(" Car monthly pass=%d",amount);
        }
        else if(trips==15){
            amount=800;
            printf("Monthly pass applies=%d",amount);
        }
        else {
            printf("Monthly pass applies=%d");
        }
        break;
        case 2:
        if(trips==1){
            amount=240;
            printf("%d",amount);
        }
        else if(trips>=5&&trips<10){
            amount=trips*240;
            printf("%d",amount);
        }
        else if(trips>=10){
            amount=trips*240;
            printf("%d",amount);
        }
        else {
            printf("valid number",amount);
        }
        break;
        default:
        printf("in between case 1nad2 ",vehicle_type);


    }
    return 0;
}