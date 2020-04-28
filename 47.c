#include <stdio.h>
int main()
{
    int a[] = {25, 85, 4, 88, 4, 58, 4, 2, 58, 8, 6, 65, 2, 23, 6, 5, 4, 1, 5, 5, 585, 265, 55, 5, 5, 5}, size;
//program to calculate size of array
    size = sizeof(a) / sizeof(a[0]);
    printf("size=%d\n", size);
    return 0;
}