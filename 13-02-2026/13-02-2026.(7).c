#include <stdio.h>
int main() {
    //Your Code goes here!
    int clas,age;
    scanf("%d %d",&clas,&age);
     int final_fare;
     
    switch (clas){
        case 1:

        if(age<=12){
            
           final_fare=300*0.5;
           printf("%d",final_fare);

        }
        else if(age>60){
             final_fare=300*67/100;
            printf("%d",final_fare);

        }
        else {
            printf("no discount",final_fare);
        }
        break;
        case 2:
        
        if(age<=12){
            final_fare=1000*50/100;
            printf("%d",final_fare);
        }
        else {
            printf("no discount",final_fare);
        }
        break;
        default:
        printf("case between 1 and 2 only",clas);
    }
    return 0;
}