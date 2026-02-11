
    #include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    printf("enter the numbar\n",n);
    scanf("%d",&n);
    switch(n){
        case 1  :
        printf("jan");
        break;
        
        case 2:
        if(n<=28){

        
        printf("feb");
        }
        else {
            printf("leap year");
        }
        break;
        case 3:
        printf("mar");
        break;
        case 4:
        printf("apr");
         break;
         case 5 :
         printf("may");
          break;
          case 6:
          printf("june");
           break;
           case 7:
           printf("july");
            break;
            case 8:
            printf("aug");
            break;
            case 9:
            printf("sep");
            break;
            case 10:
            printf("oct");
            break;
            case 11:
            printf("nov");
            break;
            case 12:
            printf("dec");
            break;



        default:
        printf("in valid");
    }


       
    
    return 0;
}
    
 