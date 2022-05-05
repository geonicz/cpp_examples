/* random.c - Demonstrates using a multidimensional array */

#include <stdio.h>
#include <stdlib.h>
/* Declare a three-dimensional array with 1000 elements */

int random_array[64000][10];
int a, b, c;

int main( void )
{
    /* Fill the array with random numbers. The C library */
    /* function rand() returns a random number. Use one */
    /* for loop for each array subscript. */

    printf("int %d", sizeof(int));
    printf("short %d", sizeof(short));
    printf("long %d", sizeof(long));
    printf("long long %d", sizeof(long long));
    printf("float %d", sizeof(float));
    printf("double %d", sizeof(double));

    /* Now display the array elements 10 at a time */

    getch();
    return 0;
}   /* end of main() */

