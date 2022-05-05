// Program using a time structure with additional functions
// for adding time.
//
#include <iostream.h>

struct time {
   int hours;
   int minutes;
   int seconds;
};

void print_time(struct time tm);
void add_hour(struct time *tm);
void add_minute(struct time *tm);
void add_second(struct time *tm);

int main(int argc, char* argv[])
{
    struct time start_time = {7, 15, 20};
    struct time end_time = {10, 20, 30};

    // Print initial times
    cout << "\nStart time:  ";
    print_time(start_time);
    cout << "\nEnd time:  ";
    print_time(end_time);

    // Add 1 hour, 1 minute, and 1 second to end time
    add_hour(&end_time);
    add_minute(&end_time);
    add_second(&end_time);

    // Print final times
    cout << "\n\nStart Time:  ";
    print_time(start_time);
    cout << "\nNew End Time:  ";
    print_time(end_time);

    return 0;
}

// Print a time structure in h:m:s format
//----------------------------------------
void print_time(struct time tm)
{
    cout << tm.hours << ":" << tm.minutes << ":" << tm.seconds;
}

// Add 1 to the number of hours
//------------------------------
void add_hour(struct time *tm)
{
    tm->hours += 1;
    while (tm->hours >= 24 )
    {
        tm->hours -= 24;
    }
}

// Add 1 to the number of minutes
//--------------------------------
void add_minute(struct time *tm)
{
    tm->minutes += 1;
    while (tm->minutes >= 60)
    {
        add_hour(tm);
        tm->minutes -= 60;
    }
}

// Add 1 to the number of seconds
//--------------------------------
void add_second(struct time *tm)
{
    tm->seconds += 1;
    while (tm->seconds >= 60)
    {
        add_minute(tm);
        tm->seconds -= 60;
    }
}

