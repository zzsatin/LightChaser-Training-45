#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *n = (int*)malloc(sizeof(int));
   *n = 10;
   printf("Value of n: %d\n", *n);
   free(n);
   return 0;
}