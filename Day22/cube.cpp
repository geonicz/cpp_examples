// A C++ program with square and cube classes
#include <iostream.h>

// Simple square class
class square {
  public:
    square();
    square(int);
    int length;
    long area();
    int draw();
};

//simple cube class inheriting from the square class
class cube: public square {
  public:
    cube( int );
    long area();
};

//constructor for square
square::square()
{
    length = 4;
}

//overloaded constructor for square
square::square( int init_length )
{
    length = init_length;
}

//square class' area function
long square::area( void )
{
    return((long) length * length);
}

//square class' draw function
int square::draw()
{
   int ctr1 = 0;
   int ctr2 = 0;

   for (ctr1 = 0; ctr1 < length; ctr1++ )
   {
       cout << "\n";  /* new line */
       for ( ctr2 = 0; ctr2 < length; ctr2++)
       {
           cout << "*";
       }
   }
   cout << "\n";

   return 0;
}

//cube class' constructor
cube::cube( int init_length)
{
    length = init_length;
}

//cube class' area function
long cube::area()
{
    return((long) length * length * length);
}

int main()
{
    square square1;
    square1.length = 5;
    square square2(3);
    square square3;
    cube cube1(4);

    cout << "\nDraw square 1 with area of " << square1.area() << "\n";
    square1.draw();

    cout <<"\nDraw square 2 with area of " << square2.area() << "\n";
    square2.draw();

    cout << "\nDraw square 3 with area of " << square3.area() << "\n";
    square3.draw();

    cout << "\nDraw cube 1 with area of " << cube1.area() << "\n";
    cube1.draw();  //Actually uses square's draw function

    return 0;
}

