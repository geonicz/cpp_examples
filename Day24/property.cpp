// Using access functions
#include <iostream.h>

class time {

private:
  int  hours;
  int  minutes;
  int  seconds;

public:
   void init( int h, int m, int s);
   void print_time(void);

   void set_hours( int h);
   void set_minutes( int m );
   void set_seconds( int s );

   int  get_hours( void );
   int  get_minutes( void );
   int  get_seconds( void );
};

int main(int argc, char* argv[])
{
    time myTime;

    myTime.init(11, 43, 20);

    //print the initialized time
    cout << "\nMy time is:  ";
    myTime.print_time();

    //reset the time data members individually
    cout << "\n\nResetting time to 3:12:30...\n";

    myTime.set_hours( 3 );
    myTime.set_minutes(12);
    myTime.set_seconds (30);

    //print the time data members individually
    cout << "\nThe hours are now:   " << myTime.get_hours();
    cout << "\nThe minutes are now: " << myTime.get_minutes();
    cout << "\nThe seconds are now: " << myTime.get_seconds();

    return 0;
}

// Print a time structure in h:m:s format
//----------------------------------------
void time::print_time(void)
{
    cout << hours << ":" << minutes << ":" << seconds;
}

// Initialize data member values
//-------------------------------
void time::init(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

// Access functions
//------------------
int time::get_hours()
{
    return hours;
}
int time::get_minutes()
{
   return minutes;
}
int time::get_seconds()
{
    return seconds;
}
void time::set_hours( int h )
{
    hours = h;
}
void time::set_minutes( int m )
{
    minutes = m;
}
void time::set_seconds( int s )
{
    seconds = s;
}

