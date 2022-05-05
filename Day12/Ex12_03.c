/* Using a global variable */
#include <stdio.h>

int var = 99;

void print_value(void);

int main( void )
{
    print_value();
    return 0;
}

void print_value(void)
{
    printf( "The value is %d\n", var );
}

