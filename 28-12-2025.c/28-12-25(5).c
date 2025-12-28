#include <stdio.h>
int main() {
    //Your Code goes here!
    int a=1627;

    

    if((a%400==0)||(a%4==0&&a%100!=0)){
        printf("leap year");
    }
    else 
    printf("not a leap year");
    
    return 0;
}