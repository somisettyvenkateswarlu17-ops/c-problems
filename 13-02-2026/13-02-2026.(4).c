#include <stdio.h>
int main() {
    //Your Code goes here!
    int connection_type,units,bill;
    scanf("%d %d",&connection_type,&units);
    switch(connection_type){
        case 1:
        printf("\n=====domestic connection======\n",connection_type);
        if(units<100){
            bill=units*3;
            printf("%d",bill);
        }
        else if(units>=100){
            bill=units*5;
           
            printf("%d",bill);
            bill=bill+80;
             printf("subsidy will be add",bill);

        }
        else {
            printf("proper input",bill);
        }
        break;
        case 2:
        printf("\n=====commercial connection=====\n",connection_type);
        if(units<=100){
            bill=units*7;
            printf("%d\n",bill);
        }
        else if(units>100){
            bill=units*10;
        
            printf("%d\n",bill);
            printf("no subsipy",bill);
        }
        break;
    
    default:
             printf("case will be 1 and 2 only",connection_type);
    }
    
    return 0;
}