#include <stdio.h>
int main() {
    //Your Code goes here!
    int plan;
    float per_day;
    scanf("%d %.2f",&plan,&per_day);
    switch(plan){
       case 1:
        if(per_day<=1.00&&(per_day>=0.00&&per_day>=5,00)){
            printf("normal speed",per_day);
        }
        else {
            printf("speed reduced ",per_day);
        }
        break;
        case 2:
        if(per_day<=2.00&&(per_day>=0.00&&per_day>=5,00)){
           printf("normal speed",per_day);
        }
        else {
            printf("extra charges applied",per_day);
        }
        break;
        default:
        printf("case in 1 nad 2",plan);


    }
    return 0;
}