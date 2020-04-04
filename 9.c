#include <stdio.h>
int main()
{
    int amount, discount, price, finalprice;             //program to calculate discount//
    printf("Enter the selling price:\n");
    scanf("%d", &amount);
    printf("Enter discount you've got:\n");
    scanf("%d", &discount);
    price = amount * discount / 100;
    finalprice = amount - price;
    printf("the final price will be:%d\n", finalprice);
    return 0;
}