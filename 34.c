#include <stdio.h>
int main()
{
    int m[2][2], n[2][2], o[2][2];                   //program to check matrices are equal// 
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
        for (int j = 0; j < 2; i++)
        {
            if (m[i][j] = n[i][j])
            {
                printf("m matrix and n matrix are equal\n");
            }
            else
            {
                printf("m matrix and n matrix are not\n");
            }

            return 0;
        }
    }
}