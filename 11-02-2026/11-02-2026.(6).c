#include <stdio.h>
int main() {
    //Your Code goes here!
    int num;
    printf("enter the number\n",num);
     scanf("%d",&num);
     if(num>0){
        printf("postive");
     }
     else if(num<0){
        printf("negative");
     }
     else {
        printf("zero");
     }

    return 0;
}