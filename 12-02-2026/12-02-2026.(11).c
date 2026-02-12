#include <stdio.h>
int main() {
    //Your Code goes here!
    int speed;
    scanf("%d",&speed);
    if(speed>80){
        printf("speed Limit exceed",speed);

    }
    else if(speed<=80){
        printf("with in limit",speed);
    }
      else {
        printf("go slow");
      }


    
    return 0;
}