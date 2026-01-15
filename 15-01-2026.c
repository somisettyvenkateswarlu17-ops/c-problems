#include <stdio.h>
int main() {
    //Your Code goes here!
    int start,end,i,j,isprime;
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++){
        if(i<=1){
            continue;
            isprime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1){
                printf("%d",i);
            }
        }
    }
    
    return 0;
}