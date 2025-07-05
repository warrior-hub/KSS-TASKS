#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    
    printf("Enter str1: ");
    scanf("%19s", str1);  

    printf("Uppercase of string: %s\n",strupr(str1));
    printf("Reverse of string: %s",strrev(str1));

    return 0;
}
