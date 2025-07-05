#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    
    printf("Enter str1: ");
    scanf("%19s", str1);  

    printf("Enter str2: ");
    scanf("%19s", str2); 

    int cmp = strcmp(str1, str2);

    if (cmp == 0) {
        printf("Both are same\n");
    } else {
        printf("Both are different\n");
    }

    return 0;
}
