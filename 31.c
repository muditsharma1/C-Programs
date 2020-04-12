#include <stdio.h>
int main()
{
    int m[2][2], n[2][2], o[2][2];                                   //program to add 2D array//
    printf("enter the elements of m matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("enter the elements of n matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            o[i][j] = m[i][j] + n[i][j];
            printf("elements of o matrix:%d\n", o[i][j]);
        }
    }
    return 0;
}