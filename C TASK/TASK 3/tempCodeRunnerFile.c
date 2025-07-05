 #include<stdio.h>
 int main( ){
  int i,j;
  //char ch = 65;
  for (int i =1; i <=5; i++)
  {
    char ch = 65;
    for (int j = 1; j <= i; j++)
    {
      printf("%c ",ch);
      ch++;
    }
    printf("\n");
  }
  
 }