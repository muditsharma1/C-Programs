#include <conio.h>
#include <stdio.h>
int main()
{
    int i, n, num, pos, a[10];                     // program to insert an element in an array//
    printf("Enter the no. elements");
    scanf("%d", &n);
    printf("enter the values of each element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the no to be inserted");
    scanf("%d", &num);
    printf("enter the position on which you want to insert");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = num;
    n++;
    printf("in the array after inserting of %d is", num);
    for (i = 0; i < n; i++)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}