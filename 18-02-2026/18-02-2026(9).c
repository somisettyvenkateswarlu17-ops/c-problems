#include <stdio.h>
int main() {
    //Your Code goes here!
    int duration,hours;
    scanf("%d %d",&duration,&hours);
    switch(duration){
        case 1:
        if(hours<=1){
            printf("short interruption",hours);
            break;

        }
        case 2:
        if(hours<=4){
            printf("medium interruption",hours);
            break;
        }
        case 3:
        if(hours>4){
            printf("long interruption",hours);
            break;
        }
        default:
        printf("in case between the 1 and 3",duration);

    }

    return 0;
}