#include <stdio.h>
int main() {
    //Your Code goes here!
    int book_type,per_day;
    scanf("%d %d",&book_type,&per_day);
    switch(book_type){
        case 1:
        per_day=per_day*2;
        printf("%d",per_day);
        break;
        case 2:
        per_day=per_day*5;
        printf("%d",per_day);
        break;
        default:
        printf("in case 1 and 2 only",book_type);

    }
    return 0;
}