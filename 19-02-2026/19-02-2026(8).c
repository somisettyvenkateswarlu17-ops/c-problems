#include <stdio.h>
int main() {
    //Your Code goes here!
    int distance_category,distance;
    scanf("%d",&distance_category,&distance);
    switch(distance_category){
        case 1:
        distance<=5;
        printf("transport fee--800",distance);
        break;
         case 2:
        distance>6&&distance<=10;
        printf("transport fee--1600",distance);
        break;
         case 3:
        distance>10;
        printf("transport fee--1800",distance);
        break;
        default:
        printf("in betwwen the 1and 3",distance_category);
        
        
        

    }
    return 0;
}