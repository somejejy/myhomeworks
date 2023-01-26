#include<stdio.h>

int main()
{
   int a = 1;

   for (int i=1; i <= 100; i++) {
       a = a + i;
   }

   printf("%i", a);
}
