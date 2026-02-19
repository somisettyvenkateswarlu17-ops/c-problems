#include <stdio.h>
int main() {
    //Your Code goes here!
    int warranty_category;
    scanf("%d",&warranty_category);
    int year;
    scanf("%d",&year);
    switch(warranty_category){
        case 1:
        year==2;
        printf("limited warranty",year);
        break;
        case 2:
        year==0||year==1;
        printf("under warranty",year);
        break;
        case 3:
        year>2;
        printf("out of warranty",year);
        break;
        default:
        printf("in case between 1 and 3",warranty_category);
    }
    return 0;
}