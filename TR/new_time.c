/*new_time.c */
/* Figures out the day of week for a given date */

#include <stdio.h>
#include <time.h>

static const char *const wday[] = {
  "Sunday",
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
  "-unknown-"
};

int main(void)
{
   int year = 2002;
   int month = 4;    /* month (Jan = 1, etc.)*/
   int day = 27;

   struct tm time_str;

   time_str.tm_year = year - 1900;
   time_str.tm_mon = month - 1;
   time_str.tm_mday = day;
   time_str.tm_hour = 0;
   time_str.tm_min = 0;
   time_str.tm_sec = 1;
   time_str.tm_isdst = -1;

   if (mktime(&time_str) == (time_t)(-1))
   {
       time_str.tm_wday = 7;
   }
   printf("%s\n", wday[time_str.tm_wday]);

   system("PAUSE");

   return 0;
}
