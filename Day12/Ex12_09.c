#include <stdio.h>
void print_letter2(void);           /* function prototype */

int ctr;
char letter1 = 'X';
char letter2 = '=';

int main( void )
{
   for( ctr = 0; ctr < 10; ctr++ )
   {
      printf( "%c", letter1 );
      print_letter2();
   }
   return 0;
}

void print_letter2(void)
{
   for( ctr = 0; ctr < 2; ctr++ )
      printf( "%c", letter2 );
}

