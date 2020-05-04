#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define MAX 10
int main()
{
    int a[MAX],i,b;
    for (i=0;i<MAX;i++)
    {
        b= rand()%MAX;
        a[i]=b;
    }
    printf("the contexts of the array are:\n");
    for(i=0;i<MAX;i++)
     {
         printf("%d\t",a[i]);
     }
     return 0;
}




