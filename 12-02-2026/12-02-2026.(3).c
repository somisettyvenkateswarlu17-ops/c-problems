#include <stdio.h>
int main() {
    //Your Code goes here!
    int salary;
    printf("enter the salary",salary);
    scanf("%d",&salary);
    if(salary>=35000){
        printf("BONUS ELIGIBLE");
    }
    else if(salary>=30000){
        printf("not eligible");

    }
    else {
        printf("salary below limit");
    }
    return 0;
}