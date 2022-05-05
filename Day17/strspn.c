/* Searching with strspn(). */

#include <stdio.h>
#include <string.h>

int main( void )
{
    char  buf1[80], buf2[80];
    size_t loc;

    /* Input the strings. */

    printf("Enter the string to be searched: ");
    gets(buf1);
    printf("Enter the string containing target characters: ");
    gets(buf2);

    /* Perform the search. */

    loc = strspn(buf1, buf2);

    if ( loc ==  0 )
        printf("No match was found.\n");
    else
        printf("Characters match up to position %d.\n", loc-1);
    return 0;
}

