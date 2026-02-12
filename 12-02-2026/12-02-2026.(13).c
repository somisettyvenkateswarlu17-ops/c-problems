#include <stdio.h>
int main() {
    //Your Code goes here!
  int n;
  scanf("%d",&n);
  if(n>=18&&n<=70){
    printf("vote eligible");
  }
    else {
        printf("not eligible");
    }
    return 0;
}