/*    ASCII VALUE
    ----------------

    A) A-Z : 65 TO 90
    B) a - z : 97 to 122
    C) 0 to 9 : 48 to 57

 note: to get ascii value of a char; we have to convert that char variable into int varibale or we can print char varible with %d idenityfier
 to get char for an ascii value we have to convert tahth int varible to into char varible or we can print that ascii value waith %c identyfire and will print char of thath ascii value */

 
//  #include<stdio.h>
//  int main( ){
//   char i,j;
//   for (char i = 65; i <70; i++)
//   {
//     for (char j = 65; j <= i; j++)
//     {
//       printf("%c ",i);
//     }
//     printf("\n");
//   }
  
//  } 

//  #include<stdio.h>
//  int main( ){
//   int i,j;
//   //char ch = 65;
//   for (int i =1; i <=5; i++)
//   {
//     char ch = 65;
//     for (int j = 1; j <= i; j++)
//     {
//       printf("%c ",ch);
//       ch++;
//     }
//     printf("\n");
//   }
  
//  }

 
#include<stdio.h>
int main(){
  char ch = 65;
  for (ch = 65;ch<=90;ch++)
  {
    printf("%c ",ch);
  }
  
}


