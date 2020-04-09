#include <stdio.h>
int main()
{
    int a, b;                              //program to add two numbers without using plus//
    printf("enter the value of first number:\n");
    scanf("%d", &a);
    printf("enter the value of second number:\n");
    scanf("%d", &b);
    if (b > 0)
    {
        while (b != 0)
        {
            a++;
            b--;
        }
    }
    else if (b < 0)
    {
        while (b != 0)
        {
            a--;
            b++;
        }
    }
    printf("The sum Of given numbers will be:%d\n", a);
    return 0;
}