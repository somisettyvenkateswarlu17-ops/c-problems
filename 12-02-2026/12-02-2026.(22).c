#include <stdio.h>
int main() {
    //Your Code goes here!
    int ac;
    scanf("%d",&ac);
    if(ac<=18){
        printf("heating mode",ac);
    }   
    else if(ac<=25){
        printf("normal mode",ac);
    } 
    else{
        printf("cooling moade",ac);
    }
    
    return 0;
}