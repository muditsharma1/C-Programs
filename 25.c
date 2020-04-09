#include <stdio.h>
int main()
{
    int n, marks[n];                             //program to print array//                  
    printf("enter the size of array:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("enter the elements of array:\n");
        scanf("%d", &marks[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("the elements of array are:%d\n", marks[i]);
    }
    return 0;
}