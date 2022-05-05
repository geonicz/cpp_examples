//Using default parameters
#include <iostream.h>

// Function prototype with default parameters
void rectangle (int width = 3, int length = 3, char draw_char = 'X');

int main(int argc, char* argv[])
{
    cout << "\nrectangle( 8, 2, \'*\' );\n";
    rectangle( 8, 2, '*' );

    cout << "\nrectangle( 4, 5 );\n";
    rectangle( 4, 5 );

    cout << "\nrectangle( 2 );\n";
    rectangle( 2 );

    cout << "\nrectangle( );\n";
    rectangle( );

    return 0;
}

void rectangle ( int width, int length, char draw_char )
{
   int ctr1 = 0;
   int ctr2 = 0;

   for (ctr1 = 0; ctr1 < length; ctr1++ )
   {
       cout << "\n";
       for ( ctr2 = 0; ctr2 < width; ctr2++)
       {
           cout << draw_char;
       }
   }
   cout << "\n";
}

