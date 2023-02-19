#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
*/

int main(void)
/* Print lowercase a to z except 'e'and 'q'*/
{
int ch;

ch = 97;
for ( ; ch <123 ; ch++)
  {
    if (ch == 101 || ch == 113)
      continue;
    putchar(ch);
      } 
 
putchar(10);
return (0);
}
