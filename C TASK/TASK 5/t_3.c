#include <stdio.h>

int main() {
    getDigitSum();
    return 0;
}

void getDigitSum( ) {
   int i=1, digit,sum=0,n=565;

  while (n !=0)
  {
    digit= n%10;
    sum= sum+digit;
    n = n/10;
  }
  printf("%d",sum);
  

   
}