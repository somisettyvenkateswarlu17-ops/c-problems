#include <stdio.h>
int main() {
    //Your Code goes here!
     int category,age;
     scanf("%d %d",&category,&age);
     switch(category){
        case 1:
        if(age<=5){
            printf("1600",age);
        }
        else {
            printf("2500",age);
        }
        break;
        case 2:
        if(age<=5){
            printf("4000",age);
        }
        else{
            printf("6000",age);
        }
        break;
        default:
        printf("in case between 1 nad 2 only",category);
     }   
       
    return 0;
}