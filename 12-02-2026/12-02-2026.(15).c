#include <stdio.h>
int main() {
    //Your Code goes here!
    int attendance;
    scanf("%d",&attendance);
    if(attendance){
        printf("eligible for exam",&attendance);
    }
    else {
        printf("not eligible for exam",&attendance );
    }
    return 0;
}