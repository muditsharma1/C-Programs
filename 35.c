#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 5, b = 6, c;              //program to find sum using functions//
    c = sum(a, b);
    printf("%d\n", c);
    return 0;
}