#include <stdio.h>
int main()
{
    int num, i;                                 //program to print multiplication table//
    printf("Enter The Number You Want The Table Of:\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", num, i, num * i);
    }
    return 0;
}