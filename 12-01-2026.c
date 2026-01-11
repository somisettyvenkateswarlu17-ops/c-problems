#include <stdio.h>
int main() {
    //Your Code goes here!145
    
    int n;
    scanf("%d",&n);
    int sum=0;
   int x=n;
   while (n!=0){
   int rem=n%10;
   int fact=1;
   for( int i=0; i<=rem; i++){
     fact=fact*i;
   }
   n=n/10;
   sum=sum+fact;


   }
   
   printf("%d\n", sum);
   if (sum==x){
    printf("strong");
   }
   else {
    printf("not_strong");
   }
    
    return 0;
}