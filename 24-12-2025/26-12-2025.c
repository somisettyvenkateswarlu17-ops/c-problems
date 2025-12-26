#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    float b;

    scanf("%d",&a);
    if(a>=5000){
        b=a-(a*0.10);
    }
    else {
        b=a-(a*0.05);
    }
    printf("%.2f",b);
    return 0;
}