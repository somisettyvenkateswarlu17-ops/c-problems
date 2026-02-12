#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    int c;
    printf("enter the number\n",a,b);
    scanf("%d %d %d",&c ,&a,&b);
    
    switch(c ){
        case 1:
        printf("sum =%d",a+b);
        break;
        
        case  2:
        printf("sub =%d",a-b);
        break;
        case 3 :
        printf("mul =%d",a*b);
        break;
        case 4:
        if(b!=0){
            printf("div =%d",a/b);
        }
        else {
            printf("it is a zero");
        }
        break;
        default:
        printf("in valid");
    }


       
    
    return 0;
}