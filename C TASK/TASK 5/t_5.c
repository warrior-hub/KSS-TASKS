#include <stdio.h>

int findMax(int a, int b, int c);

int main() {
    int num1, num2, num3, max;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    max = findMax(num1, num2, num3);
    printf("Maximum number is: %d\n", max);

    return 0;
}

int findMax(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
