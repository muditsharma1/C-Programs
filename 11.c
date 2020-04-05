#include <stdio.h>
#include <math.h>
int main()
{                                      //program to findout am and gm of two numbers//
    float a, b, AM, GM;
    printf("Enter The Value Of a\n");
    scanf("%f", &a);
    printf("Enter The Value Of b\n");
    scanf("%f", &b);
    AM = (a + b) / 2;
    GM = sqrt(a * b);
    printf("AM Will Be %f\n", AM);
    printf("GM Will Be %f\n", GM);
    return 0;
}