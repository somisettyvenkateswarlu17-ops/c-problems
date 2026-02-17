#include <stdio.h>
int main() {
    //Your Code goes here!
    int seat_type,show_time;
    scanf("%d %d",&seat_type,&show_time);
    switch(seat_type){
        if(show_time<18){
            printf("150",show_time);
              }
        else{
            printf("200",show_time);
        }
        break;
        case 2:
         if(show_time<18){
            printf("200",show_time);
              }
        else{
            printf("250",show_time);
        }
        break;
        default:
        printf("in case 1 nd 2",seat_type);

    }
    
    return 0;
}