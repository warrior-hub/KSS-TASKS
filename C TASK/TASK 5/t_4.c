#include <stdio.h>

void getDigitSum();
int main()
{
    getDigitSum();
}

void getDigitSum()
{
    char ch;
    int num1, num2;

    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter /,-,*,+: ");
    scanf("%c", &ch);
    printf("enter  num2: ");
    scanf("%d", num2);

    switch (ch)
    {
    case '+':
        printf("%d", num1 + num2);

        break;
    case '-':
        printf("%d", num1 - num2);

        break;
    case '*':
        printf("%d", num1 * num2);

        break;
    case '/':
        printf("%d", num1 / num2);

        break;

    default:
        break;
    }
}