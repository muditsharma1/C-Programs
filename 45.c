#include <stdio.h>
int main()
{
    int num, count = 0, result = 0, mul = 1, rem;
    printf("enter the number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    while (num != 0)
    {
        rem = num % 10;
        while (count != 0)
        {
            mul = mul * rem;
            count--;
        }
        result = result + mul;
        num = num / 10;
        mul = 1;
    }
    if (result == num)
    {
        printf("%d is a armstrong number\n", num);
    }
    else
    {
        printf("%d is not a armstrong number\n", num);
    }
    return 0;
}