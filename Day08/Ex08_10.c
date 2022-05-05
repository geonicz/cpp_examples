#include <stdio.h>

/* Declare a single-dimensional array */

int elements[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int new_array[10];
int idx;

int main( void )
{
   for (idx = 0; idx < 10; idx++)
   {
      new_array[idx] = elements[idx] + 10 ;
   }

   for (idx = 0; idx < 10; idx++)
   {
      printf( "\nelements[%d] = %d \tnew_array[%d] = %d",
      idx, elements[idx], idx, new_array[idx] );
   }
   return 0;
}

