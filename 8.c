#include <stdio.h>
int main()
{
    int celsius, fahrenheit;                        //program to convert temperature from celsius to fahrenheit//
    printf("Enter The Temperature In Celsius:\n");
    scanf("%d", &celsius);
    fahrenheit = ((1.8) * celsius) + 32;
    printf("The Temperature In Fahrenheit Will Be:%d\n", fahrenheit);
    return 0;
}