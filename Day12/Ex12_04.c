                         /* Using a local variable*/
#include <stdio.h>

void print_value(int var);

int main( void )
{
    int var = 99;
    print_value(  var );

    return 0;
}

void print_value(int var)
{
    printf( "The value is %d\n", var );
}

