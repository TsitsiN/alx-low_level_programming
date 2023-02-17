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
/*This is what main is doing */
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* My task 0 Code */

if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
