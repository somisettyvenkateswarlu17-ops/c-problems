#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    
    scanf("%c",&ch);
    
    if (ch>='A'&&ch<='Z'){
    printf("UPPERCASE");}
    else
    printf("lower case");
    return 0;
}