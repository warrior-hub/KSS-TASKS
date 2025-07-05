#include <stdio.h>

int main() {
    float length, width, area;

    // Input length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;

    // Output area with 3 decimal places
    printf("The area of the rectangle is: %.3f\n", area);

    return 0;
}
