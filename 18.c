#include <stdio.h>
int main()
{
    int b, g;                                          /*Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
                                                        Basic Salary <= 10000 : HRA = 20%, DA = 80%
                                                        Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
                                                        Basic Salary >= 20001 : HRA = 30%, DA = 95%*/
                                                                            
    printf("Enter Your Basic Salary:\n");
    scanf("%d", &b);
    if (b <= 10000)
    {
        g = b + b * 0.2 + b * 0.8;
        printf("Gross Salary Is:%d\n", g);
    }
    else if (b <= 20000)
    {
        g = b + b * 0.25 + b * 0.9;
        printf("Gross Salary Is:%d\n", g);
    }
    else if (b > 20000)
    {
        g = b + b * 0.3 + b * 0.95;
        printf("Gross Salary Is:%d\n", g);
    }
    return 0;
}