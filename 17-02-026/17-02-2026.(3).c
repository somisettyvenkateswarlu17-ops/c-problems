#include <stdio.h>
int main() {
    //Your Code goes here!
    int category,distance;
    scanf("%d %d",&category,&distance);
    switch(category){
        case 1:
        if(distance<=30){
            printf("eligible",distance);
        }
        else if(distance>30&&distance<=100){
            printf("eligible with extra fee",distance);
        }
        else {
            printf("in valid",distance);
        }
        break;
        case 2:
        if(distance<=30){
            printf("eligible",distance);
        }
        else(distance>30){
            printf(" not eligible ",distance);
        }
        break;
        default:
        printf("case 1 and 2",category);
        

    }
    return 0;
}