#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;                                         //swapping by call by reference//
    printf("enter the value of x and y:");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("%d%d", x, y);
    return 0;
}