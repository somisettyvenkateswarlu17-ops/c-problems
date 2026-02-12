#include <stdio.h>
int main() {
    //Your Code goes here!
    int railway_ticket;
    scanf("%d",&railway_ticket);
    if(railway_ticket<=0){
        printf("wating list",railway_ticket);
    }
    else{
        printf("comfired",railway_ticket);
    }
    
    
    return 0;
}