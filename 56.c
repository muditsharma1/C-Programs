#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];

    printf("Enter a: ");
    gets(a);
    printf("\nEntered String in Lowercase: %s", strlwr(a));
    printf("\nEntered String in Uppercase: %s", strupr(a));

    return 0;
}
