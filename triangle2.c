
/* Write a program to find the area of triangle whose base and height are taken from the user*/

#include <stdio.h>
//#include <math.h>
 int main()
{
    int base, height;
    float  area;

    // the values of base and area must be integers.
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the height:");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Area of the triangle: %.1f\n", area);

    return 0;

}