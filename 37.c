#include <stdio.h>
#include <math.h>
int cube(int a)
{
    return pow(a, 3);
}
int main()
{
    int a, c;                         //program to find cube using functions//
    printf("enter the side of cube:\n");
    scanf("%d", &a);
    c = cube(a);
    printf("%d\n", c);
    return 0;
}