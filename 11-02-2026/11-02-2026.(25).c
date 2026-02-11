#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    char op;
    printf("enter the number\n",a,b);
    scanf("%d %c %d",&a,&op,&b);
    switch(op){
        case'+':
        printf("%d",a+b);
        break;
        
        case  '-':
        printf("%d",a-b);
        break;
        case '*' :
        printf("%d",a*b);
        break;
        case '/':
        if(b!=0){
            printf("%d",a/b);
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