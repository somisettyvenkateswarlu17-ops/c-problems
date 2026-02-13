#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks ;
    scanf("%d",&marks);
    int a;
    if(marks<=100&&marks>90){
       a=1;
    }
    else if(marks>=81&&marks<=90){
        a=2;
    }
    else if(marks>=71&&marks<=80){
        a=3;
    }
    else if(marks>=61&&marks<=70){
        a=4;

    }
    else if(marks>=51&&marks<=60){
        a=5;
    }
    else if(marks>=41&&marks<=50){
        a=6;
    }
    else if(marks>=31&&marks<=39){
        a=7;
    }
    else{
        a=8;
    }
    switch(a){
        case 1:
        
            printf("A garde");
        
        break;
        case 2:
        
            printf("B garde");
        
        break;
        case 3:
        
            printf("c garde");
        
        break;
        case 4:
        
            printf("d garde");
        
        break;
        case 5:
        
            printf("e garde");
        
        break;
        case 6:
        
            printf("f garde");
        
        break;
        case 7:
        
            printf(" supplementary");
        
        break;
        case 8:
        
            printf(" fail");
        
        break;
        default:
        printf("between 1 and 8",a);





        
    }

    
    return 0;
}