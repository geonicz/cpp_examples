/* Searching with strcspn(). */

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

    loc = strcspn(buf1, buf2);

    if ( loc ==  strlen(buf1) )
        printf("No match was found.");
    else
        printf("The first match was found at position %d.\n", loc);
    return 0;
}

