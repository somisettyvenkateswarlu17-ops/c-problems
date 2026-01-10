#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char ch[100];
    int count=0;
    scanf("%s",ch);
    gets(ch);
    
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            count++;
        }
    }  
      printf("%d",count);
    
    return 0;
}