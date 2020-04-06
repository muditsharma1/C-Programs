#include <stdio.h>
int main()
{
    int a;                                                            //program to check divisibility of 5 and 11//                            
    printf("Enter The number You Want To Check divisibility:\n");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("%d is divisible by 5\n", a);
    }
    else
    {
        printf("%d is not divisible by 5\n",a);
    }
    
    if (a % 11 == 0)
    {
        printf("%d is divisible by 11\n", a);
    }
    else
    {
        printf("%d is not divisible by 11\n", a);
    }
    return 0;
}