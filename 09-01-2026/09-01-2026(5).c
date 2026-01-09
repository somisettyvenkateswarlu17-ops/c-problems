#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
   
    scanf("%s",str1);
    int i,x=1,len;
    len= strlen(str1);
    for(i=0;i<len/2;i++){
        if (str1[i]!=str[len-i-1]){
           x=0;
           break;

        }
    }
    if(x==1){
        printf("p");
    }
    else {
        printf("nor");
    }
    
    return 0;
}