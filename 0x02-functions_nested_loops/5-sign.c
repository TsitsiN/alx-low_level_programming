#include "main.h"

/* more headers goes there */
/**
 * print_sign- print function that prints the sign of a number - Entry point
 *
 *Description: 'print the sign of a number'
 *
 *
 * Return: 1 and prints + if n is greater than 0 else return 0 and print 0 if n=0  otherwise print -1 if n is less than zero and reurn -1 (Success)
*/

int print_sign(int n)
{
if (n > 0)
putchar(43);
return (1);
else if (n == 0)
return (0);
else (n < 0)
putchar(45);
return (-1);
}