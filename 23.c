#include <stdio.h>
int main()
{
    int n1, n2, temp;                                         //program to swap two numbers//
    printf("enter the two numbers\n");
    scanf("%d\t%d", &n1, &n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("after swapping:\n %d\t %d\n", n1, temp);
    return 0;
}