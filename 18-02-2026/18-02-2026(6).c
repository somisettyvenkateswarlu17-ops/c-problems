#include <stdio.h>
int main() {
    //Your Code goes here!
    int amount,days,delay;
    scanf("%d",&delay);
    scanf("%d",&days);
    switch(delay){
        case 1:
        if(days<=5){
           amount=days*50;
            printf("%d",amount);
        }
            break;
        
    }
    return 0;
}