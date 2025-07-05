#include <stdio.h>


int main()
{
    float perimeter, radius, PI=3.14159;

    
    printf("Enter the perimeter of the circle in cm: ");
    scanf("%f", &perimeter);

    radius = perimeter / (2 * PI);
    
    printf("The radius of the circle is: %.3f square cm\n", radius);

}
