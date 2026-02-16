#include <stdio.h>
int main() {
    //Your Code goes 
    int lone_type,score;
    scanf("%d %d",&lone_type,&score);
     switch(lone_type){
        case 1:
        if(score>=700){
            printf("approved",score);
        }
        else if(score>=650&&score<=699){
            printf("manual review",score);
        }
        else {
            printf("rejected",score);
        }
        break;
        case 2:
        if(score>=700){
            printf("approved",score);
        }
        else {
            printf("rejected",score);
        }
        break;
        default:
        printf("in between 1 nad 2",lone_type);
     }
    return 0;
}