#include <stdio.h>
int main()
{
    int n, temp;                                   //program to reverse an array// 
    printf("enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements of array:\n");
        scanf("%d", &a[i]);
    }
    printf("before reversing of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("elements of array are:%d\n", a[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("After reversing of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("the elements of array:%d\t\n", a[i]);
    }
    return 0;
}