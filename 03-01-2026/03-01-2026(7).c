#include <stdio.h>
int main() {
    //Your Code goes here!
     int n;
     scanf("%d",&n);
   int  sum=0;
    while (n!=0){
        n/=10;
        sum++;
        

    }
    printf("%d",sum);
    

    
    return 0;
}