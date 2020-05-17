#include <stdio.h>
void printsstar(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void printhsstar(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void printhsstardia(rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == rows - 3 && j == rows - 2 || i == rows - 2 && j == rows - 3 || i == rows - 2 && j == rows - 1 || i == rows - 1 && j == rows - 2)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
void printrstar(rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            printf(" ");
        }
    }
    for (int j = 1; j <= rows; j++)
    {
        printf("*");
    }
    printf("\n");
}

void printhrtstar(rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void printrastar(rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("enter the value of rows:\n");
    scanf("%d", &rows);
    printf("enter the type of pattern you want:\nenter 0 for square star pattern\n1 for hollow square star pattern\n2 for hollow square star pattern with diagonal\n3 for rhombus star pattern\n4 for right triangle star pattern\n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printsstar(rows);
        break;

    case 1:
        printhsstar(rows);
        break;
    case 2:
        printhsstardia(rows);
        break;
    case 3:
        printrstar(rows);
        break;
    case 4:
        printrastar(rows);
        break;
    default:
        break;
    }
    return 0;
}