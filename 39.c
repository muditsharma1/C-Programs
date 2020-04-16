#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {                                                       //Program to find factorial using recursion//
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{
    int n;
    printf("enter the number you want to find factorial of:\n ");
    scanf("%d", &n);
    printf("the factorial of %d is %d\n", n, factorial(n));
    return 0;
}