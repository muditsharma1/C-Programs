#include <stdio.h>
int main()
{
    int num;                             //program to check whether the number is positive,negative or zero//
    printf("Enter The Number:\n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("the number entered is positive\n");
    }
    if (num < 0)
    {
        printf("the number entered is negative\n");
    }
    if (num == 0)
    {
        printf("the number entered is zero\n");
    }
    return 0;
}