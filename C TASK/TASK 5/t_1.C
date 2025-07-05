#include <stdio.h>


void chekEO(int);

int main() {
    chekEO(6);
    return 0;
}
void chekEO(int a) {
    if (a % 2 == 0) {
        printf("even number");
    } else {
        printf("odd number");
    }}
