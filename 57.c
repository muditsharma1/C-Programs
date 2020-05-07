#include <stdio.h>

    int fibonacci(int number)
    { 
    if (number == 1 || number == 2)
    {
        return number -1;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}
int main()
{
    int n;
    printf("enter any number:\n");
    scanf("%d", &n);
    printf("fibonacci series =%d\n", fibonacci(n));
    return 0;
}
