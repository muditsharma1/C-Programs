#include <stdio.h>
int main()
{
    float num1, num2, sum, sub, multi, divi;     //program for basic addition,subtraction,multiplication and division//
    int op;
    printf("enter the first number:\n");
    scanf("%f", &num1);
    printf("enter the second number:\n");
    scanf("%f", &num2);
    printf("enter the operation you want:(press 1 for addition,2 for subtraction,3 for multiplication,4 for division)\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        sum = num1 + num2;
        printf("%f", sum);
        break;
    case 2:
        sub = num1 - num2;
        printf("%f", sub);
        break;
    case 3:
        multi = num1 * num2;
        printf("%f", multi);
        break;
    case 4:
        divi = num1 / num2;
        printf("%f", divi);
        break;
    default:
        printf("the entered operation is not valid");
        break;
    }
    return 0;
}