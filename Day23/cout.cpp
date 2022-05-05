//Using cout with different data types
#include <iostream.h>

int main(int argc, char* argv[])
{
    int   an_int = 123;
    long  a_long = 987654321;
    float a_float = (float) 123.456;
    char  a_char = 'A';
    char *a_string = "A String";
    bool  a_boolean = true;

    cout << "\n";
    cout << "an int:   "<< an_int    << '\n';
    cout << "a long:   "<< a_long    << '\n';
    cout << "a float:  "<< a_float   << '\n';
    cout << "a char:   "<< a_char    << '\n';
    cout << "a string: "<< a_string  << '\n';
    cout << "a bool:   "<< a_boolean << '\n';

    return 0;
}

