#include <stdio.h>
int main() {
    //Your Code goes here!
     int plan_type;
     scanf("%d",&plan_type);
     switch(plan_type){
        case 1:
        printf("speed 40 Mbps",plan_type);
        break;
         case 2:
        printf("speed 100 Mbps",plan_type);
        break;
         case 3:
        printf("speed 300 Mbps",plan_type);
        break;
        default:
        printf("case between the 1 and 3",plan_type);

     }
    return 0;
}