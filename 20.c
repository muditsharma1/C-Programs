#include <stdio.h>
int main()
{
    int num;                                            //program to print week name by number//
    printf("Enter the Number you want to find the week name:\n1 for monday\n2 for tuesday\n3 for wednesday\n4 for thursday\n5 for friday\n6 for saturday\n7 for sunday\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("the entered value is incorrect");
        break;
    }
}