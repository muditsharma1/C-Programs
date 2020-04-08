#include <stdio.h>
int main()
{
    int n, sum;                                  //program to check sum of n numbers//
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("sum of all natural numbers:%d\n", sum);
    return 0;
}
