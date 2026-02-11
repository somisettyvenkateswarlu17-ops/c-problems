#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    printf("enter the value",ch);
    scanf("%c",&ch);
    if(ch>=48&&ch<=57){
        printf("digits");
    }
    else if(ch>=65&&ch<=90||ch>=97&&ch<=122){
        printf("alphabet");
    }
    else {
        printf("sepcial character ");
    }
    return 0;
}