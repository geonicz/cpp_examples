/*============================================================*
 * Program: listD06.c                                        *
 * Book:    Teach Yourself C in 21 Days                       *
 * Purpose: This program is an alternative approach to        *
 *          the same task accomplished in Listing D.5.       *
 *          This program has a higher degree of portability!  *
 *============================================================*/
#include <ctype.h>

int main(void)
{
  unsigned char x = 0;
  char trash[256];                /* use to flush extra keys */
  while( x != 'Q' && x != 'q' )
  {
     printf( "\n\nEnter a character (Q to quit) ==> " );

     x = getchar();

     if( isalpha(x) )
     {
        printf( "\n\n%c is a letter of the alphabet!", x );
        if( isupper(x) )
        {
           printf("\n%c is an uppercase letter!", x );
        }
        else
        {
           printf("\n%c is a lowercase letter!", x );
        }
     }
     else
     {
        printf( "\n\n%c is not a letter of the alphabet!", x );
     }
     gets(trash);   /* get extra keys */
  }
  printf("\n\nThank you for playing!\n");
  return 0;
}

