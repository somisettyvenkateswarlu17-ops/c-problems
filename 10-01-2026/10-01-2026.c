#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char ch[100];
    fgets(ch,100,stdin);
    
    for(int i=strlen(ch)-1;i>=0;i--){
    printf("%c\n ",ch[i]);

    }
    
    
    return 0;
}