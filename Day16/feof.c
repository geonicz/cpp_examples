/* Detecting end-of-file. */
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 100

int main( void )
{
    char buf[BUFSIZE];
    char filename[60];
    FILE *fp;

    puts("Enter name of text file to display: ");
    gets(filename);

    /* Open the file for reading. */
    if ( (fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    /* If end of file not reached, read a line and display it. */

    while ( !feof(fp) )
    {
        fgets(buf, BUFSIZE, fp);
        printf("%s",buf);
    }

    fclose(fp);
    return 0;
}

