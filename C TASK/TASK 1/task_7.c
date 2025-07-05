#include <stdio.h>

int main()
{
    int a, b, c, d, e, sum;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;

    printf("The sum of the five numbers is: %d\n", sum);

    return 0;
}
