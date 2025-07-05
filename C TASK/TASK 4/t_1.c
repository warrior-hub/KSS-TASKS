#include <stdio.h>
#include <string.h>
int main()
{
  int i, sum = 0;
  int num[10];

  printf("enter any 10 number: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &num[i]);
  }
  for (int j = 0; j < 10; j++)
  {
    sum = sum + num[j];
  }

  float avg = sum / 10;
  printf("%d",sum);
  printf("average of the numbers: %f", avg);
}