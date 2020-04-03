#include <stdio.h>
#include <math.h>
int main()
{
    float a;                                       //program to find out area of equilateral triangle//
    printf("Enter the side of equilateral triangle:\n");
    scanf("%f", &a);
    printf("Area Of Equilateral triangle will be:%0.2f\n", 0.433 * pow(a, 2));
    return 0;
}