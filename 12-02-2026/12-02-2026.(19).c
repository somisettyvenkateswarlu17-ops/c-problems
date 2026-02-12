#include <stdio.h>
int main() {
    //Your Code goes here!
    int mobile_charge;
    scanf("%d",&mobile_charge);
    if(mobile_charge<20){
        printf("low battery");
    }
    else {
        printf("battery ok");
    }
    return 0;
}