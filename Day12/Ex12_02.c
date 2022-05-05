/* Illustrates variable scope. */
#include <stdio.h>

void print_value(int x);

int main( void )
{
    int x = 999;

    printf("%d", x);
    print_value( x );

    return 0;
}

void print_value( int x)
{
    printf("%d", x);
}

