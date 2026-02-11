#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    printf("enter the vowel",ch);
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("vowel");
    }
    else {
        printf("not vowel");
    }

    return 0;
}