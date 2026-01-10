#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
   int  sum=0;
   int temp=n;
   while(temp!=0){
    int mul=temp%10;
    int cube =mul*mul*mul;
    sum+=cube;
    temp=temp/10;

   }
   if(sum==n){
    
    printf("a");

   } 
   else
    printf("not");
   
    
    return 0;
}