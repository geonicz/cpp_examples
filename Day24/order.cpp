#include <iostream.h>

class base {
protected:
    int  Bval;
public:
    void set_Bval(int x) { Bval = x; };
    int  get_Bval(int x) { return Bval; };
    base( int x = -99 );
    ~base();            //destrutor
};

class sub : public base {
protected:
    int Sval;
public:
   void set_Sval( int x ) { Sval = x; };
    int  get_Sval() { return Sval; };
    sub( int x = -22 );
    ~sub();             // destructor
};

base::base( int x )
{
    Bval = x;
    cout << "\n B >> in base class constructor...";
}

base::~base()
{
    cout << "\n B >> ...in base class destructor";
}

sub::sub( int x ) : base ( -1 )
{
    cout << "\n S >> in sub class constructor...";
}

sub::~sub()
{
    cout << "\n S >> ...in sub class destructor";
}

int main(int argc, char* argv[])
{
    cout << "\n . >> Instantiating a sub class...\n";

    sub sub1;

    cout << "\n . >> ...sub class instantiated...";
    cout << "\n . >> ...ending program...\n";

    return 0;
}

