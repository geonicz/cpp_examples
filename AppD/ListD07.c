/*=======================================================*
 * Program: listD07.c                                   *
 * Purpose: This program demonstrates using defined      *
 *          constants for creating a portable program.   *
 * Note:    This program gets different results with     *
 *          different compilers.                         *
 *=======================================================*/
#include <stdio.h>
#ifdef _WINDOWS

#define STRING "DOING A WINDOWS PROGRAM!\n"

#else

#define STRING "NOT DOING A WINDOWS PROGRAM\n"

#endif

int main(void)
{
   printf( "\n\n") ;
   printf( STRING );

#ifdef _MSC_VER

   printf( "\n\nUsing a Microsoft compiler!" );
   printf( "\n   Your Compiler version is %s\n", _MSC_VER );

#endif

#ifdef __TURBOC__

   printf( "\n\nUsing the Turbo C compiler!" );
   printf( "\n   Your compiler version is %x\n", __TURBOC__ );

#endif

#ifdef __BORLANDC__

   printf( "\n\nUsing a Borland compiler!\n" );

#endif

   return 0;
}

