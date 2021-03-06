/* Using malloc() to determine free memory.*/

#include <stdio.h>
#include <stdlib.h>

/* Definition of a structure that is
   1024 bytes (1 kilobyte) in size.) */

struct kilo {
   struct kilo *next;
   char dummy[1022];
};

int FreeMem(void);

int main( void )
{

   printf("You have %d kilobytes free.\n", FreeMem());
   return 0;
}

int FreeMem(void)
{
   /*Returns the number of kilobytes (1024 bytes)
   of free memory. */

   long counter;
   struct kilo *head, *current, *nextone;

   current = head = (struct kilo*) malloc(sizeof(struct kilo));

   if (head == NULL)
      return 0;      /*No memory available.*/

   counter = 0;
   do
   {
      counter++;
      current->next = (struct kilo*) malloc(sizeof(struct kilo));
      current = current->next;
      printf("\r%d", counter);
   } while (current != NULL);

   /* Now counter holds the number of type kilo
      structures we were able to allocate. We
      must free them all before returning. */

   current = head;
   do
   {
      nextone = current->next;
      free(current);
      current = nextone;
   } while (nextone != NULL);

   return counter;
}

