#include <stdio.h>
int main() {
    //Your Code goes here!
    int count,marks;
    scanf("%d %d",&count,&marks);
    switch(count){
        case 1:
        if(marks>=80){
            printf("excellent",marks);
        }
        else{
            printf("not qualified",marks);
        }
        break;
         case 2:
        if(marks>=60){
            printf("good",marks);
        }
        else{
            printf("not qualified",marks);
        }
        break;
         case 3:
        if(marks<60){
            printf("need improvement",marks);
        }
        else{
            printf("not qualified",marks);
        }
        break;
        default:
        printf("in between the 1 nad 3",count);
    }
    return 0;
}