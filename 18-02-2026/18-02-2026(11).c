#include <stdio.h>
int main() {
    //Your Code goes here!
     int violation_type;
     scanf("%d",&violation_type);
     switch(violation_type){
        case 1:
        printf("No Helmet-1000",violation_type);
        break;
        case 2:
        printf("signal jump-1500",violation_type);
        break;
        case 3:
        printf("over speeding-2000",violation_type);
        break;
        default:
        printf("in between the 1 and 3",violation_type);
     }
    return 0;
}