#include <stdio.h>

void si();

int main() {
    si();
    return 0;
}

void si() {
    int p,t,r;
    printf("enter price rate and principal");
    scanf("%d%d%d",&p,&t,&r);
   float si = p*t*r/100;
   printf("%f",si);

}