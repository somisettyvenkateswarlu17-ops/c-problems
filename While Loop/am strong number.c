#include <stdio.h>
int main() {
    int n, temp, sum = 0, digit;
    scanf("%d", &n);
 temp = n;
 while(n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
  if(temp == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");
  return 0; 
}
