#include <stdio.h>

int main() {
    int a, s, d;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &s, &d);

    if (a > s) {
        if (a > d) {
            printf("a is the max number: %d\n", a);
        } else {
            printf("d is the max number: %d\n", d);
        }
    } else {
        if (s > d) {
            printf("s is the max number: %d\n", s);
        } else {
            printf("d is the max number: %d\n", d);
        } 
    }

    return 0;
}
