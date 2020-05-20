#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], rows, columns;
    printf("\nEnter No. of Rows: ");
    scanf("%d", &rows);
    printf("\nEnter No. of Columns: ");
    scanf("%d", &columns);

    printf("\nInput for Matrix A\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    printf("\nPrinting transpose of Matrix A\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
