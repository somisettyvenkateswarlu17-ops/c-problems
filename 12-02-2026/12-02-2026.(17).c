#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
   long long int   income;
    scanf("%d %lld",&marks,&income);
    if(marks>=85&&income<300000){
        printf("eligible");
    }
    else {
        printf("not eligible");
    }
    
    return 0;
}