#include <stdio.h>
int main()
{
    int m[2][2], o[2][2];                        //program to multiply a scaler in a matrix//
    int k;
    printf("enter the elements of m matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("enter the value of multiplier:\n");
    scanf("%d", &k);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            o[i][j] = k * m[i][j];
            printf("elements of o matrix:%d\n", o[i][j]);
        }
    }
    return 0;
}
