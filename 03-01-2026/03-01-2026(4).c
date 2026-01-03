#include <stdio.h>
int main() {
    //Your Code goes here! 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("_ ");
        }
        for(int star=0;star<i+1;star++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}