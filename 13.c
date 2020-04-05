#include <stdio.h>
int main()
{
   int num;                                        //program to check whether the number is even or odd//
   printf("Enter a number:\n ");
   scanf("%d", &num);
   if (num % 2 == 0)
   {
      printf("\n%d is a even number", num);
   }
   else
   {
      printf("\n%d is a odd number", num);
   }
   return 0;
}