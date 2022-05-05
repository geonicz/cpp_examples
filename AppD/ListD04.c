/*==========================================================*
 * Program: listD04.c                                      *
 * Book:    Teach Yourself C in 21 Days                     *
 *                                                          *
 * Purpose: To use maximum and minimum constants.           *
 * Note:    Not all valid characters are displayable to the *
 *          screen!                                         *
 *==========================================================*/

#include <float.h>
#include <limits.h>
#include <stdio.h>

int main( void )
{
    unsigned char ch;
    int  i;

    printf( "Enter a numeric value.");
    printf( "\nThis value will be translated to a character.");
    printf( "\n\n==> " );

    scanf("%d", &i);

    while( i < 0 || i > UCHAR_MAX )
    {
       printf("\n\nNot a valid value for a character.");
       printf("\nEnter a value from 0 to %d ==> ", UCHAR_MAX);

       scanf("%d", &i);
    }
    ch = (char) i;

    printf("\n\n%d is character %c\n", ch, ch );

    return 0;
}

