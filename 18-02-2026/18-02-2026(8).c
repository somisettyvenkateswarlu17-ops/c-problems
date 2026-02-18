#include <stdio.h>
int main() {
    //Your Code goes here!
    int vehicle_type,distance;
    scanf("%d %d",&vehicle_type,&distance);
    switch(vehicle_type){
       case 1:
         distance=distance*10;
         printf("%d",distance);
         break;
          case 2:
         distance=distance*15;
         printf("%d",distance);
         break;
         case 3:
         distance=distance*20;
         printf("%d",distance);
         break;
         default:
         printf("in case between 1 and 3",vehicle_type);

    }
    
    return 0;
}