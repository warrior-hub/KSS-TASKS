#include <stdio.h>

int main()
{
    int a, b = 0;

    printf("enter the number: ", a);
    scanf("%d", &a);

    while (a != 0)
    {
       a = a/10;
        b++;
    }
        printf("countt of digit is: %d", b);
}