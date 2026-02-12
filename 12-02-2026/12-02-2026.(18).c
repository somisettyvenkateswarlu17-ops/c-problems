#include <stdio.h>
int main() {
    //Your Code goes here!
    int water_level;
    scanf("%d",&water_level);
    if(water_level>90){
        printf("overflow warning");
    }
    else {
        printf("safe level");
    }
    
    return 0;
}