/* The character conversion functions strlwr() and strupr(). */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main( void )
{
    char buf[80];
    int  ctr;

    while (1)
    {
        puts("Enter a line of text, a blank to exit.");
         gets(buf);

        if ( strlen(buf) == 0 )
            break;

        for ( ctr = 0; ctr< strlen(buf); ctr++)
        {
           printf("%c", tolower(buf[ctr]));
        }

        printf("\n");
        for ( ctr = 0; ctr< strlen(buf); ctr++)
        {
           printf("%c", toupper(buf[ctr]));
        }
        printf("\n");
    }
    return 0;
}

