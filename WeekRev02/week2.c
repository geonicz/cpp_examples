/*-------------------------------------------------*/
/* Program Name:  week2.c                          */
/* program to enter information for up to 100      */
/* people.  The program prints a report            */
/*          based on the numbers entered.          */
/*-------------------------------------------------*/
/*---------------------*/
/* included files      */
/*---------------------*/
#include <stdio.h>
#include <stdlib.h>

/*---------------------*/
/* defined constants   */
/*---------------------*/
#define MAX   100
#define YES   1
#define NO    0

/*---------------------*/
/* variables           */
/*---------------------*/

struct record {
    char fname[15+1];              /* first name + NULL   */
    char lname[20+1];              /* last name + NULL    */
    char phone[9+1];               /* phone number + NULL */
    long income;                   /* incomes             */
    int  month;                    /* birthday month      */
    int  day;                      /* birthday day        */
    int  year;                     /* birthday year       */
};

struct record list[MAX];      /* declare actual structure */

int last_entry = 0;           /* total number of entries  */

/*---------------------*/
/* function prototypes */
/*---------------------*/
int main(void);
void get_data(void);
void display_report(void);
int  continue_function(void);
void clear_kb(void);

/*---------------------*/
/* start of program    */
/*---------------------*/

int main( void )
{
   int cont = YES;
   int ch;

   while( cont == YES )
   {
      printf( "\n");
      printf( "\n     MENU");
      printf( "\n   ========\n");
      printf( "\n1.  Enter names");
      printf( "\n2.  Print report");
      printf( "\n3.  Quit");
      printf( "\n\nEnter Selection ==> ");

      ch = getchar();

      fflush(stdin);  /* remove extra characters from keyboard buffer */

      switch( ch )
      {
        case '1': get_data();
                  break;
        case '2': display_report();
                  break;
        case '3': printf("\n\nThank you for using this program!\n");
                  cont = NO;
                  break;
        default:  printf("\n\nInvalid choice, Please select 1 to 3!");
                  break;
       }
   }
   return 0;
}

/*-----------------------------------------------------------*
 *  Function:  get_data()                                    *
 *  Purpose: This function gets the data from the user. It   *
 *         continues to get data until either 100 people are *
 *         entered, or the user chooses not to continue.     *
 *  Returns: nothing                                         *
 *  Notes: This allows 0/0/0 to be entered for birthdates in *
 *      case the user is unsure.  It also allows for 31 days *
 *       in each month.                                      *
 *-----------------------------------------------------------*/

void get_data(void)
{
  int cont;

  for ( cont = YES; last_entry < MAX && cont == YES;last_entry++ )
  {
     printf("\n\nEnter information for Person %d.",last_entry+1 );

     printf("\n\nEnter first name: ");
     gets(list[last_entry].fname);

     printf("\nEnter last name: ");
     gets(list[last_entry].lname);

     printf("\nEnter phone in 123-4567 format: ");
     gets(list[last_entry].phone);

     printf("\nEnter Yearly Income (whole dollars): ");
     scanf("%ld", &list[last_entry].income);

     printf("\nEnter Birthday:");

     do
     {
         printf("\n\tMonth (0 - 12): ");
         scanf("%d", &list[last_entry].month);
     }while ( list[last_entry].month < 0 ||
              list[last_entry].month > 12 );

     do
     {
         printf("\n\tDay (0 - 31): ");
         scanf("%d", &list[last_entry].day);
     }while ( list[last_entry].day <  0 ||
              list[last_entry].day > 31 );

     do
     {
         printf("\n\tYear (1800 - 2003): ");
         scanf("%d", &list[last_entry].year);
     }while (list[last_entry].year != 0 &&
            (list[last_entry].year < 1800 ||
             list[last_entry].year > 2003 ));

     cont = continue_function();
  }

  if( last_entry == MAX)
     printf("\n\nMaximum Number of Names has been entered!\n");
}

/*-----------------------------------------------------------*
 *  Function:  display_report()                              *
 *  Purpose:   This function displays a report to the screen *
 *  Returns:   nothing                                       *
 *  Notes:     More information could be displayed.          *
 *             Change stdout to stdprn to Print report       *
 *-----------------------------------------------------------*/

void display_report()
{
   long   month_total = 0,
          grand_total = 0;       /* For totals */
   int    x, y;

   fprintf(stdout, "\n\n");      /* skip a few lines */
   fprintf(stdout, "\n           REPORT");
   fprintf(stdout, "\n          ========");

   for( x = 0; x <= 12; x++ )   /* for each month, including 0 */
   {
      month_total = 0;
      for( y = 0; y < last_entry; y++ )
      {
         if( list[y].month == x )
         {
             fprintf(stdout,"\n\t%s %s %s %ld",list[y].fname,
                     list[y].lname, list[y].phone,list[y].income);
             month_total += list[y].income;
         }
      }
      fprintf(stdout, "\nTotal for month %d is %ld",x,month_total);
      grand_total += month_total;
   }
   fprintf(stdout, "\n\nReport totals:");
   fprintf(stdout, "\nTotal Income is %ld", grand_total);
   fprintf(stdout, "\nAverage Income is %ld", grand_total/last_entry );

   fprintf(stdout, "\n\n* * * End of Report * * *");
}

/*-------------------------------------------------------------------*
 *  Function:  continue_function()                                   *
 *  Purpose:   This function asks the user if they wish to continue. *
 *  Returns:   YES - if user wishes to continue                      *
 *             NO  - if user wishes to quit                          *
 *-------------------------------------------------------------------*/

int continue_function( void )
{
   int ch;

   printf("\n\nDo you wish to continue? (Y)es/(N)o: ");

   fflush(stdin);
   ch = getchar();

   while( ch != 'n' && ch != 'N' && ch != 'y' && ch != 'Y' )
   {
       printf("\n%c is invalid!", ch);
       printf("\n\nPlease enter \'N\' to Quit or \'Y\' to Continue: ");

       fflush(stdin);     /* clear keyboard buffer (stdin) */
       ch = getchar();
   }

   clear_kb();  /* this function is similar to fflush(stdin) */

   if(ch == 'n' || ch == 'N')
        return(NO);
   else
        return(YES);
}

/*--------------------------------------------------------------------*
 *  Function:  clear_kb()                                             *
 *  Purpose:   This function clears the keyboard of extra characters. *
 *  Returns:   Nothing                                                *
 *  Note:      This function could be replaced by fflush(stdin);      *
 *--------------------------------------------------------------------*/
void clear_kb(void)
{
     char junk[80];
     gets(junk);
}

