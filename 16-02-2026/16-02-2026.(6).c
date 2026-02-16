#include <stdio.h>
int main() {
    //Your Code goes here!
    #include <stdio.h>
int main() {
    //Your Code goes here!
    int mode,category;
    scanf("%d %c",&mode,&category);
    switch(mode){
         case 1:
        switch(category){
            case'R':
            printf("R-5000",category);
            break;
            case's':
            printf("S-3000",category);
            break;

        }
        break;
        case 2:
        switch(category){
            case'R':
            printf("R-9000",category);
            break;
            case's':
            printf("S-7000",category);
            break;
            default:
            printf("only R and S",category);
        }
        break;
        default:
        printf("1 and 2 only",mode);
        
          
    }
    return 0;
}
    
    return 0;
}