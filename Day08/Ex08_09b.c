#include <stdio.h>

/* Declare a single-dimensional array */

int elements[10];
int idx;

int main( void )
{
   for (idx = 0; idx < 10; idx++)
      elements[idx] = idx ;

   for (idx = 0; idx < 10; idx++)
      printf( "\nelements[%d] = %d ", idx, elements[idx] );

   return 0;
}

