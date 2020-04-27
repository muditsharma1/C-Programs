#include <stdio.h>
int main()
{
     int num, rem, q, result = 0;                    //program to check palindrome number//
     printf("enter the value of number:\n");
     scanf("%d", &num);
     q = num;
     while (q != 0)
     {
          rem = q % 10;
          result = result * 10 + rem;
          q = q / 10;
     }
     if (result == num)
     {
          printf("its a palindrome");
     }
     else
     {
          printf("no its not a palindrome");
     }
     return 0;
}