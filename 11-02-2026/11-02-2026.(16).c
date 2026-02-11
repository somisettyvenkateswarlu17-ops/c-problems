#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    printf("enter the marks\n",marks);
    scanf("%d",&marks);
    if(marks>=90&&marks<=100){
        printf("Grade A");
    }
    else if(marks>=75&&marks<=89){
        printf("Grade B");
    }
    else {
        printf("Grade c");
    }
    return 0;
}