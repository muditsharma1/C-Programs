#include <stdio.h>
int square(int n)
{
    return n * n;
}
int main()
{
    int n, result;                           //program to find square using functions//
    printf("enter the value of n:\n");
    scanf("%d", &n);
    result = square(n);
    printf("Square=%d\n", result);
    return 0;
}