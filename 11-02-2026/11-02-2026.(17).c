#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    printf("enter the alphabets\n",ch);
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        printf("UPPER CASE");
    }
    else{
        printf("LOWER CASE");
    }
    return 0;
}