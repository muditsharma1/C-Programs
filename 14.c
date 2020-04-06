#include <stdio.h>
#include <math.h>
int main()
{
    int x, y,z;                                 //program to find out power of any number//
    printf("Enter the value of base:\n");
    scanf("%d", &x);
    printf("Enter the value  of exponent:\n");
    scanf("%d", &y);
    z=pow(x,y);
    printf("%d^%d=%d", x, y, z);
    return 0;
}