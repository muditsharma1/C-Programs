#include <stdio.h>
int main()
{
    int days, year, weeks;                    //program to convert days into years,weeks,days//
    printf("Enter The Number Of Days:\n");
    scanf("%d", &days);
    year = days / 365;
    printf("year(s)=%d\t", year);
    weeks = (days - year * 365) / 7;
    printf("week(s)=%d\t", weeks);
    days = days - year * 365 - weeks * 7;
    printf("days=%d\t", days);
    return 0;
}