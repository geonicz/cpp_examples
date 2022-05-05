/*=======================================================*
 * Program: listD05.c
 * Purpose: This program may not be portable due to the  *
 *          way it uses character values.                *
 *=======================================================*/
#include <stdio.h>
int main(void)
{
  unsigned char x = 0;
  char trash[256];               /* used to remove extra keys */
  while( x != 'Q' && x != 'q' )
  {
     printf( "\n\nEnter a character (Q to quit) ==> " );

     x = getchar();

     if( x >= 'A' && x <= 'Z')
     {
        printf( "\n\n%c is a letter of the alphabet!", x );
        printf("\n%c is an uppercase letter!", x );
     }
     else
     {
        if( x >= 'a' && x <= 'z')
        {
           printf( "\n\n%c is a letter of the alphabet!", x );
           printf("\n%c is a lowercase letter!", x );
        }
        else
        {
           printf( "\n\n%c is not a letter of the alphabet!", x );
        }
     }
     gets(trash); /* eliminates enter key */
  }
  printf("\n\nThank you for playing!\n");
  return 0;
}

