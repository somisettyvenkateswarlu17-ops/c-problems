#include <stdio.h>
int main() {
    //Your Code goes here!
    int doctor_type;
    scanf("%d",&doctor_type);
    switch(doctor_type){
        case 1:
        printf(" Consultation Fee ₹500",doctor_type);
        break;
         case 2:
        printf(" Consultation Fee ₹1200",doctor_type);
        break;
        default:
        printf("in betwwen the 1 and 2",doctor_type);

    }
    return 0;
}