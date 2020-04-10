#include <stdio.h>
#include <conio.h>
int main()
{
    int n, a[n], i;                         //program to check average of array//
    float avg, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Elements Of Array:\n");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("avg=%0.2f", avg);

    return 0;
}
