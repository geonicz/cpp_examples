/*==========================================================*
 * Program: listD02.c                                      *
 * Book:    Teach Yourself C in 21 Days                     *
 * Purpose: This program prints the sizes of the variable   *
 *          types of the machine the program is compiled on *
 *==========================================================*/
#include <stdio.h>
int main(void)
{
  printf( "\nVariable Type Sizes" );
  printf( "\n=========================" );
  printf( "\nchar             %d", sizeof(char) );
  printf( "\nshort            %d", sizeof(short) );
  printf( "\nint              %d", sizeof(int) );
  printf( "\nfloat            %d", sizeof(float) );
  printf( "\ndouble           %d", sizeof(double) );

  printf( "\n\nunsigned char    %d", sizeof(unsigned char) );
  printf( "\nunsigned short   %d", sizeof(unsigned short) );
  printf( "\nunsigned int     %d\n", sizeof(unsigned int) );

  return 0;
}

