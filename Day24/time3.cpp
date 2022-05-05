// Program using a time structure with member functions
//
#include <iostream.h>

struct time {
   // Data Members:
   int hours;
   int minutes;
   int seconds;

   // Member Functions:
   void print_time(void);
   void add_hour(void);
   void add_minute(void);
   void add_second(void);
};

int main(int argc, char* argv[])
{
    struct time start_time = {7, 15, 20};
    struct time end_time = {10, 20, 30};

    // Print initial times
    cout << "\nStart time:  ";
    start_time.print_time();
    cout << "\nEnd time:  ";
    end_time.print_time();

    // Add 1 hour, 1 minute, and 1 second to end time
    end_time.add_hour();
    end_time.add_minute();
    end_time.add_second();

    // Print final times
    cout << "\n\nStart time:  ";
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

