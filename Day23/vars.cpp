//Showing variable declarations the C++ way
#include <iostream.h>

int main(int argc, char* argv[])
{
    char a_char = 'x';

    for (int ctr = 1; ctr < 10; ctr++ )
    {
        cout << "\nLine: " << ctr << " - printing the char: " << a_char;
    }

    char *just_for_fun = "Just For Fun!!!";

    cout << "\n\njust_for_fun = " << just_for_fun << "\n";

    return 0;
}

