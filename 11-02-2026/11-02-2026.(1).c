#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c||b>a&&b>c||c>a&&c>b){
        printf("%d");
    } 
    else{
        printf("wrong");
    }
    return 0;
}