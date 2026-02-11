#include <stdio.h>
int main() {
    //Your Code goes here!
     int units;
     scanf("%d",&units);
     float bill;
     if(units<=50){
        bill=units*3;
     }
     else if (units<=100){
        bill=(50*3)+(units-50)*5;
     }
     else {
        bill=(50*3)+(50*5)+(units-100)*7;

     }
     printf("%.2f",bill);
    return 0;
}