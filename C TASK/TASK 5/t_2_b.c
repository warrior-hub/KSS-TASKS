#include <stdio.h>

void radha(int r,int t,int p);

int main() {
    radha(4,5,600);
    return 0;
}

void radha(int r,int t,int p) {
  float si = p*t*r/100;
    printf("%f",si);


}
