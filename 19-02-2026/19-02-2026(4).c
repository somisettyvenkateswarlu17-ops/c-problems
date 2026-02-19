#include <stdio.h>
int main() {
    //Your Code goes here!
     int  class_type;
     scanf("%d",&class_type);
     switch(class_type){
        case 1:
        printf(" Upgrade Fee ₹300",class_type);
        break;
        case 2:
        printf(" Upgrade Fee ₹800",class_type);
        break;
        case 3:
        printf(" Upgrade Fee ₹1500",class_type);
        break;
        default:
        printf("in between the 1 and 3",class_type);

     }
    return 0;
}