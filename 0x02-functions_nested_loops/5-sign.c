#include "main.h"

/* more headers goes there */
/**
 * Engtry Point - print_sign- print function that prints the sign of a number.
 *
 *Description: 'print the sign of a number'
 *
 *
 * Return: 1 and prints + if n is greater than 0 else return 0 and print 0 if n=0  otherwise print -1 if n is less than zero and reurn -1 (Success)
*/

int print_sign(int n)
{
 
if (n > 0)
   _putchar('1');
// _putchar(',');
 _putchar('+');
 return (1);

 if (n <0)
   _putchar('-');
 return (-1);
  if (n == 0)
       _putchar('0');
return (0);
}
