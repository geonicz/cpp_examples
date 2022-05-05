                #include <stdio.h>

/* Declare a single-dimensional array */

int elements[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int idx;

int main( void )
{
   for (idx = 0; idx < 10; idx++)
   {
      printf( "\nelements[%d] = %d ", idx, elements[idx] );
   }
   return 0;
}        /* end of main() */

