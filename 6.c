#include <stdio.h>
int main()
{
    float p, t, r, si;                                       //program to find out simple interest//
    printf("Enter The principal amount:\n");
    scanf("%f", &p);
    printf("Enter The Time(per annum):\n");
    scanf("%f", &t);
    printf("Enter The Rate Of Interest:\n");
    scanf("%f", &r);
    si = (p * r * t) / 100;
    printf("The simple interest would be:%0.2f\n", si);
    return 0;
}