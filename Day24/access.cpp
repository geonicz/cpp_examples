// Controlling data access to data members and member functions
#include <iostream.h>

class time {

private:
   // Data Members:
   int hours;
   int minutes;
   int seconds;

public:
   // Member Functions:
   void init( int h, int m, int s);
   void print_time(void);
   void add_hour(void);
   void add_minute(void);
   void add_second(void);
};

int main(int argc, char* argv[])
{
    time start_time;
    time end_time;

    start_time.init(7, 15, 20);
    end_time.init(10, 20, 30);

    // Print initial times
    cout << "\nStart Time:  ";
    start_time.print_time();
    cout << "\nEnd Time:  ";
    end_time.print_time();

    // Add 1 hour, 1 minute, and 1 second to end time
    end_time.add_hour();
    end_time.add_minute();
    end_time.add_second();

    // Print final times
    cout << "\n\nstart time:  ";
    start_time.print_time();
    cout << "\nNew end time:  ";
    end_time.print_time();

    return 0;
}

// Print a time structure in h:m:s format
//----------------------------------------
void time::print_time(void)
{
    cout << hours << ":" << minutes << ":" << seconds;
}

// Add 1 to the number of hours
//------------------------------
void time::add_hour(void)
{
    hours += 1;
    while (hours >= 24 )
    {
        hours -= 24;
    }
}

// Add 1 to the number of minutes
//--------------------------------
void time::add_minute(void)
{
    minutes += 1;
    while (minutes >= 60)
    {
        add_hour();
        minutes -= 60;
    }
}

// Add 1 to the number of seconds
//--------------------------------
void time::add_second(void)
{
    seconds += 1;
    while (seconds >= 60)
    {
        add_minute();
        seconds -= 60;
    }
}

// Initialize data member values
//-------------------------------
void time::init(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

