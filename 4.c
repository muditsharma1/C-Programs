#include <stdio.h>
int main()
{
    float base, height, area;                     //program to find out area of triangle//
    printf("enter the base of triangle:\n");
    scanf("%f", &base);
    printf("enter the height of triangle:\n");
    scanf("%f", &height);
    area = (0.5) * (base * height);
    printf("area of triangle will be:%0.2f\n", area);
    return 0;
}