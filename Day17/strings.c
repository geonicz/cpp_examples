/* Demonstrates strrev(), strset(), and strnset(). */
#include <stdio.h>
#include <string.h>

char str[] = "This is the test string.";

int main( void )
{
    printf("\nThe original string: %s", str);
    printf("\nCalling strrev(): %s", strrev(str));
    printf("\nCalling strrev() again: %s", strrev(str));
    printf("\nCalling strnset(): %s", strnset(str, '!', 5));
    printf("\nCalling strset(): %s", strset(str, '!'));
    return 0;
}

