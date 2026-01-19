#include <stdio.h>

int main() {
    int  binary[20],decimal,i=0;
    scanf("%d",&decimal);
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        
        i++;
    }
    printf("binary: =");
    //Your Code goes here!
    for(i=i-1;i>=0;i++){

    
    printf("%d",binary[i]);
    }
    return 0;
}