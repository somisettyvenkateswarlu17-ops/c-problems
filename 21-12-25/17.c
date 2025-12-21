#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a){
        printf("triangle");
    }
    else 
    printf("%not triangle");
    
    return 0;
}