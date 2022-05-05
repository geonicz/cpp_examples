//Using inline functions
#include <iostream.h>

inline long square( long value )
{
    return (value * value );
}

inline long halve( long value )
{
    return (value / 2);
}

int main(int argc, char* argv[])
{
    long nbr;

    cout <<"\nEnter a number: ";
    cin >> nbr;

    cout <<"\n\nSquared: " << square(nbr);
    cout <<"\nHalved: "  << halve(nbr);

    cout <<"\nHalf the square: ";
    cout << halve(square(nbr));

    cout << "\n\nDone!";

    return 0;
}

