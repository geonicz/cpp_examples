/*Count the number of even numbers between 0 and 100. */

#include <stdio.h>

int main( void )
{
   int x = 1;
   static int tally = 0;

   for (x = 0; x < 101; x++)
   {
      if (x % 2 == 0)  /*if x is even...*/
      tally++;  /*add 1 to tally.*/

   }

   printf("There are %d even numbers.\n", tally);
   return 0;
}

