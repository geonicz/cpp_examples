#include <stdio.h>

void a_sample_function( );
int main( void )
{
    a_sample_function();
    return 0;
}

void a_sample_function( void )
{
    int ctr1;

    for ( ctr1 = 0; ctr1 < 25; ctr1++ )
        printf( "*" );

    puts( "\nThis is a sample function" );
    {
        char star = '*';
        int ctr2;     /* fix */
        puts( "\nIt has a problem\n" );
        for ( ctr2 = 0; ctr2 < 25; ctr2++ )
        {
            printf( "%c", star);
        }
     }
}

