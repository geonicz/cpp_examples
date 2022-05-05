/*=======================================================*
 * Program: listD01.c                                   *
 * Book:    Teach Yourself C in 21 Days                  *
 * Purpose: This program demonstrates case sensitivity   *
 *=======================================================*/
#include <stdio.h>
int main(void)
{
  int   var1 = 1,
        var2 = 2;
  char  VAR1 = 'A',
        VAR2 = 'B';
  float Var1 = 3.3,
        Var2 = 4.4;
  int   xyz  = 100,
        XYZ  = 500;

  printf( "\n\nPrint the values of the variables...\n" );

  printf( "\nThe integer values:   var1 = %d, var2 = %d",
           var1, var2 );
  printf( "\nThe character values: VAR1 = %c, VAR2 = %c",
           VAR1, VAR2 );
  printf( "\nThe float values:     Var1 = %f, Var2 = %f",
           Var1, Var2 );
  printf( "\nThe other integers:   xyz = %d, XYZ = %d",
           xyz, XYZ );

  printf( "\n\nDone printing the values!\n" );

  return 0;
}

