#include <stdio.h>
int main() {
    //Your Code goes here!
    int vehicle_type,parking_hours;
    scanf("%d %d",&vehicle_type,&parking_hours);
    switch(vehicle_type){
        case 1:
        parking_hours=10* parking_hours;
        printf("%d", parking_hours);
        break;
        case 2:
         parking_hours=20* parking_hours;
        printf("%d", parking_hours);
        break;
        case 3:
        printf("default vehicle\n",vehicle_type);
         parking_hours=20* parking_hours;
        printf("%d", parking_hours);
        break;
        default:
        printf("case in between 1 and 2 ",vehicle_type);



        
    }
    return 0;
}