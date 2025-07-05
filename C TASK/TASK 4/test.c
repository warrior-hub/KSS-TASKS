#include <stdio.h>
int main()
{
    int arr[4] = {2, 3, 4, 3};
    int i;
    float sum = 0;
    for (int i = 0; i < 4; i++)
    {
        //  printf("%d ",arr[i]);
        sum = sum + arr[i];
    }
    float avg = sum / 4;
    printf("%f", avg);
}