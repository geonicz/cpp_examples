//Using constructors and destructors
#include <iostream.h>

class value {
private:
    int val;
public:
    int get_value();
    value(int nbr = 99);
    ~value();
};

int main(int argc, char* argv[])
{
    cout << "\nGetting ready to declare myValue...";

    value myValue;

    cout <<"\nmyValue is now declared...";

    cout <<"\n\nPrinting myValue: " << myValue.get_value();

    cout << "\n\nEnding program.";

    return 0;
}

int value::get_value()
{
    return val;
}

// Contructor for value class
//----------------------------
value::value( int nbr )
{
    // Do initializations.
    val = nbr;
    cout << "\n...In the constructor...\n";
}

// Destructor for value class
//----------------------------
value::~value()
{
    // No real logic here for this class
    cout << "\n...In the destructor...\n";
}

