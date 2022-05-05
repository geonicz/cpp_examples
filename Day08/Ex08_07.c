/* Using two-dimensional arrays and rand() */

#include <stdio.h>
#include <stdlib.h>

/* Declare the array */

int array[5][4];
int a, b;

int main( void )
{
   for ( a = 0; a < 5; a++ )
   {
      for ( b = 0; b < 4; b++ )
      {
         array[a][b] = rand();
      }
   }

   /* Now print the array elements */

   for ( a = 0; a < 5; a++ )
   {
      for ( b = 0; b < 4; b++ )
      {
         printf( "%d\t", array[a][b] );
      }
      printf( "\n" );    /* go to a new line */
   }

   return 0;
}

