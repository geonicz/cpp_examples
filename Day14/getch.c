/* Demonstrates the getch() function. */
/* Non-ANSI code */
#include <stdio.h>
#include <conio.h>

int main( void )
{
     int ch;

     while ((ch = getch()) != '\n')
         putchar(ch);

     return 0;
}

