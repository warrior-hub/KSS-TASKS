#include<stdio.h>
int main(){
    char grade;
    printf("enter your grade: ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Very Good");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
         printf("Average");
         break;
    case 'D':
         printf("fail");
         break;
    
    default:
        printf("invalid grade");
        break;
    }
    return 0; 
    
}