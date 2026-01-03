#include <stdio.h>
int main() {
    //Your Code goes here!
     int n;
     scanf("%d",&n);
   int  sum=0;
    while (n!=0){
        int x=n%10;
        sum=sum*10+x;
        n=n/10;
    }
    printf("%d",sum);
    
    return 0;
}