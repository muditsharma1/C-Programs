#include <stdio.h>
void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1\t");
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}