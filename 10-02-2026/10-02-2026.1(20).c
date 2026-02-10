#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    scanf("%d %d",&a,&b);
    int max;
    max=(a>b) ? a:b;
    printf("%d",max);
    return 0;
}