#include <stdio.h>
int main() {
    //Your Code goes here!
    int year;
    printf("enter the value",year);
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("leap year");
    }
    else {
        printf("not a year");
    }

    return 0;
}