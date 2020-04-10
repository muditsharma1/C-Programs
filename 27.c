#include <stdio.h>
int main()
{
    int n, count1=0, count2=0;                        //program to count even and odd elements of Array//
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of the array:\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("no of even numbers =%d\n", count1);
    printf("no of odd numbers = %d\n", count2);
    return 0;
}