#include <stdio.h>

int main( void )
{
   int i1 = 100, i2 = 40, i3 = 2;
   float f1;

   f1 = (float)i3 + i1/i2;
   printf("%lf\n", f1);
   return 0;
}

