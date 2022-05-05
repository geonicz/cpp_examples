/*=====================================================*
 * Program:  listD03.c                                *
 * Book:     Teach Yourself C in 21 Days               *
 * Purpose:  Display of defined constants.             *
 *=====================================================*/
#include <stdio.h>
#include <float.h>
#include <limits.h>

int main( void )
{
    printf( "\n CHAR_BIT        %d ", CHAR_BIT );
    printf( "\n CHAR_MIN        %d ", CHAR_MIN );
    printf( "\n CHAR_MAX        %d ", CHAR_MAX );
    printf( "\n SCHAR_MIN       %d ", SCHAR_MIN );
    printf( "\n SCHAR_MAX       %d ", SCHAR_MAX );
    printf( "\n UCHAR_MAX       %d ", UCHAR_MAX );
    printf( "\n SHRT_MIN        %d ", SHRT_MIN );
    printf( "\n SHRT_MAX        %d ", SHRT_MAX );
    printf( "\n USHRT_MAX       %d ", USHRT_MAX );
    printf( "\n INT_MIN         %d ", INT_MIN );
    printf( "\n INT_MAX         %d ", INT_MAX );
    printf( "\n UINT_MAX        %ld ", UINT_MAX );
    printf( "\n LONG_MIN        %ld ", LONG_MIN );
    printf( "\n LONG_MAX        %ld ", LONG_MAX );
    printf( "\n ULONG_MAX       %e ", ULONG_MAX );
    printf( "\n FLT_DIG         %d ", FLT_DIG );
    printf( "\n DBL_DIG         %d ", DBL_DIG );
    printf( "\n LDBL_DIG        %d ", LDBL_DIG );
    printf( "\n FLT_MAX         %e ", FLT_MAX );
    printf( "\n FLT_MIN         %e ", FLT_MIN );
    printf( "\n DBL_MAX         %e ", DBL_MAX );
    printf( "\n DBL_MIN         %e \n", DBL_MIN );

    return 0;
}

