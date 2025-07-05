#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }

    if (count == 2)
    {
        printf("entered number is a prime number!");
    }
    else
    {
        printf("not a prine number!");
    }

    return 0;
}
