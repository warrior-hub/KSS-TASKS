#include <stdio.h>


int main() {
    float radius, height, csa, PI=3.14159;


    printf("Enter the radius of the cylinder (in cm): ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder (in cm): ");
    scanf("%f", &height);

    csa = 2 * PI * radius * height;

    printf("The curved surface area of the cylinder is: %.3f square cm\n", csa);
}
