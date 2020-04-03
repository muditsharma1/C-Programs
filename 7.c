#include <stdio.h>
#include <math.h>
int main()
{
    float p, t, r, ci, a;                                         //program to find out compound interest//
    printf("Enter The principal amount:\n");
    scanf("%f", &p);
    printf("Enter The Time(per annum):\n");
    scanf("%f", &t);
    printf("Enter The Rate Of Interest:\n");
    scanf("%f", &r);
    a = p * pow(1 + (r / 100), t);
    printf("The amount would be:%0.2f\n", a);
    ci = a - p;
    printf("the compound interest would be:%0.2f\n", ci);
    return 0;
}