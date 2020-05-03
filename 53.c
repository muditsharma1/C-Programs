#include <stdio.h>
struct student
{
    int id;
    int marks;
    char result;
} arun;
int main()
{
    struct student arun;
    arun.id = 1;
    arun.marks = 485;
    arun.result = "PASS";
    printf("arun's id is %d\n", arun.id);
    printf("arun's marks is %d\n", arun.marks);
    printf("arun's result is %c\n", arun.result);
    return 0;
}
