#include<stdio.h>

int main(){
    int r ,c,i;
    for (int r = 1; r<=5; r++)
    {
      for (int c = r; c <=4; c++)
      {
        printf(" ");

      }
      for ( i =1; i <=r; i++)
      {
        printf("* ");
      }
      
     printf("\n");
      
    }
    
}

