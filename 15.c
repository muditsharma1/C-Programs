#include <stdio.h>
#include <math.h>
int main()
{
    float area, s, s1, s2, s3;                            //finding area of a triangle by using heron's formula//
    printf("enter the sides of triangle:\n");
    scanf("%f%f%f", &s1, &s2, &s3);
    s = (s1 + s2 + s3) / 2;
    printf("the value of semiperimeter is:%0.2f\n", s);
    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    printf("area of triangle=%0.2f\n", area);
    return 0;
}