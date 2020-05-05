#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Sharma ", b[10] = "Mudit";

    strcat(a, b);
    printf("%s", a);

    return 0;
}