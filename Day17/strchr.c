/* Searching for a single character with strchr(). */

#include <stdio.h>
#include <string.h>

int main( void )
{
    char *loc, buf[80];
    int ch;

    /* Input the string and the character. */

    printf("Enter the string to be searched: ");
    gets(buf);
    printf("Enter the character to search for: ");
    ch = getchar();

    /* Perform the search. */

    loc = strchr(buf, ch);

    if ( loc == NULL )
        printf("The character %c was not found.", ch);
    else
        printf("The character %c was found at position %d.\n",
                ch, loc-buf);
    return 0;
}

