#include <stdio.h>
int main() {
    //Your Code goes here!
       int filght_class,weight;
       scanf("%d %d",&filght_class,&weight);
       int  charge=300;
       switch(filght_class){
        case 1:
          charge=weight*charge;
          printf("%d",charge);
          break;
          case 2:
          weight=weight-3;
          charge=weight*charge;
          printf("%d",charge);
          break;
          default:
          printf("case 1 and 2 only",filght_class);
             

       }             


    return 0;
}