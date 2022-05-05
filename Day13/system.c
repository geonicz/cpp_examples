/* Demonstrates the system() function. */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    /* Declare a buffer to hold input. */

    char input[40];

    while (1)
    {
        /* Get the user's command. */

        puts("\nInput the desired system command, blank to exit");
        gets(input);

        /* Exit if a blank line was entered. */

        if (input[0] == '\0')
            exit(0);

        /* Execute the command. */

        system(input);
    }
    return 0;
}

