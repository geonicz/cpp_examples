//Program using a time structure
//
#include <iostream.h>

struct time {
   int hours;
   int minutes;
   int seconds;
};

void print_time(struct time tm);

int main(int argc, char* argv[])
{
    struct time start_time;
    struct time end_time;

    start_time.hours = 8;
    start_time.minutes = 15;
    start_time.seconds = 20;

    end_time.hours = 10;
    end_time.minutes = 11;
    end_time.seconds = 12;

    cout << "\nStart time:  ";
    print_time(start_time);
    cout << "\n\nEnd time:  ";
    print_time(end_time);

    return 0;
}

// Print a time structure in h:m:s format
//----------------------------------------
void print_time(struct time tm)
{
    cout << tm.hours << ":" << tm.minutes << ":" << tm.seconds;
}

