#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c){
        printf("equilateral triangle");

    }
    else if(a==b||b==c){
        printf("issocless triangle");
    }
    else{
        printf("scalane triagle");
    } 
    
    return 0;
}