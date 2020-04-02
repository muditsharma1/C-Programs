#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float radius, diameter, circumference, area;                 //program to findout diameter,area,circumference//
    printf("Enter The Radius Of Circle:\n");
    scanf("%f", &radius);
    diameter = 2 * radius;
    printf("The diameter will be:%0.2f\n", diameter);
    circumference = 2 * pi * radius;
    printf("The circumference of circle will be:%0.2f\n", circumference);
    area = pi * pow(radius,2);
    printf("The Area of circle will be:%0.2f\n", area);
    return 0;
}