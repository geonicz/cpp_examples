/* random.c: using a single-dimensional array */

#include <stdio.h>
#include <stdlib.h>
/* Declare a single-dimensional array with 1000 elements */

int random[1000];
int a, b, c;
long total = 0;

int main( void )
{
   /* Fill the array with random numbers. The C library */
   /* function rand() returns a random number. Use one */
   /* for loop for each array subscript. */

   for (a = 0; a < 1000; a++)
   {
      random[a] = rand();
      total += random[a];
   }
   printf("\n\nAverage is: %ld\n",total/1000);
   /* Now display the array elements 10 at a time */

   for (a = 0; a < 1000; a++)
   {
      printf("\nrandom[%d] = ", a);
      printf("%d", random[a]);

      if ( a % 10 == 0 && a > 0 )
     {
         printf("\nPress Enter to continue, CTRL-C to quit.");
         getchar();
      }
   }
   return 0;
}        /* end of main() */

