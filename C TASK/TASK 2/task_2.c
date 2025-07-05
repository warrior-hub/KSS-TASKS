#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > c)
    {
        if (a > b)
            printf("a is greatest: %d\n", a);
        else
            printf("b is greatest: %d\n", b);
    }
    else
    {
        if (c > b)
            printf("c is greatest: %d\n", c);
        else
            printf("b is greatest: %d\n", b);
        
        
    }

    return 0;
}
