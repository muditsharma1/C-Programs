#include <stdio.h>
int main()
{
    int a = 6, b = 5, sum = 0, sub = 0, mul = 0, divi = 0, modu = 0, *x, *y;
    x = &a;
    y = &b;
    sum = *x + *y;
    sub = *x - *y;
    mul = (*x) * (*y);
    divi = *x / *y;
    modu = *x % *y;
    printf("addtion = %d\n", sum);
    printf("subtraction = %d\n", sub);
    printf("multiplication = %d\n", mul);
    printf("division = %d\n", divi);
    printf("modulus = %d\n", modu);
    return 0;
}