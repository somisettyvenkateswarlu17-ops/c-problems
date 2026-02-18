#include <stdio.h>
int main() {
    //Your Code goes here!
     int room_type;
     scanf("%d",&room_type);
     switch(room_type){
        case 1:
        printf("80000",room_type);
        break;
        case 2:
        printf("60000",room_type);
        break;
        case 3:
        printf("45000",room_type);
        break;
        default:
        printf("in between 1 nad 3",room_type);

     }
    return 0;
}