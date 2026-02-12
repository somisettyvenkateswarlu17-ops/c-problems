#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n>=85){
        printf("distinction",n);
    }
    else if(n>=55){
        printf("pass",n);
    }
    else {
        printf("fail",n);
    }
    
    return 0;
}