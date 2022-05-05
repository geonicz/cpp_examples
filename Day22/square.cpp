/* A C listing with something odd -  */
/*   using a square() function twice */
#include <stdio.h>
#include <stdlib.h>

/*square function - the first one!*/
void square( int topleftX, int topleftY, long width )
{
    int xctr = 0;
    int yctr = 0;
    /* This listing assumes bottom values are greater than top values*/

    for ( xctr = 0; xctr < width; xctr++)
    {
        printf("\n");

        for ( yctr = 0; yctr < width; yctr++ )
        {
            printf("*");
        }
    }
}

/*square function - the second one! */
void square( int topleftX, int topleftY, int bottomleftX, int bottomleftY)
{
    int xctr = 0;
    int yctr = 0;

    // This listing assumes bottom values are greater than top values

    for ( xctr = 0; xctr < bottomleftX - topleftX; xctr++)
    {
        printf("\n");

        for ( yctr = 0; yctr < bottomleftY - topleftY; yctr++ )
        {
            printf("*");
        }
    }
}

int main(int argc, char* argv[])
{
    int   pt_x1 = 0, pt_y1 = 0;
    int   pt_x2 = 5, pt_y2 = 5;
    int   pt_x3 = 0, pt_y3 = 0;
    long  side = 4;

    // Call the square function two different ways
    square( pt_x1, pt_y1, pt_x2, pt_y2);

    printf("\n\n");   //put blank lines between squares

    square( pt_x3, pt_y3, side);

    return 0;
}

