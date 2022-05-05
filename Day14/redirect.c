/* Can be used to demonstrate redirection of stdin and stdout. */

#include <stdio.h>

int main( void )
{
  char buf[80];

  gets(buf);
  printf("The input was: %s\n", buf);
  return 0;
}

