#include<stdio.h>
int main(){
    int speed_type,order_amount;
    scanf("%d %d",&speed_type,&order_amount);
    int normal=50;
    switch(speed_type){
        case 1:
        printf("normal=%d",normal);
    
    break;
    case 2:
      if(order_amount<1000){
          order_amount+=100;
        printf("%d",order_amount);
      }
      else {
        printf("%d",order_amount);
      }
      break;
      default:
      printf("between 1 and 2 ",speed_type);
}
return 0;
}
