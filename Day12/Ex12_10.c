#include <stdio.h>
void print_letter2(void);           /* function prototype */

int main( void )
{
    char letter1 = 'X';
    int ctr;

    for( ctr = 0; ctr < 10; ctr++ )
    {
       printf( "%c", letter1 );
       print_letter2();
    }
    return 0;
}

void print_letter2(void)
{
    char letter2 = '=';
    int ctr;            /* this is a local variable */
                        /* it is different from ctr in main() */
    for( ctr = 0; ctr < 2; ctr++ )
        printf( "%c", letter2 );
}

