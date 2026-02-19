#include <stdio.h>
int main() {
    //Your Code goes here!
    int course_type;
    scanf("%d",&course_type);
    switch(course_type){
        case 1:
        printf(" Certificate Fee ₹0",course_type);
        break;
        case 2:
        printf(" Certificate Fee ₹500",course_type);
        break;
        default:
        printf("in case 1 and 2",course_type);
        
    }
    
    return 0;
}