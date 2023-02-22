#include "main.h"

/* more headers goes there */
/**
 * Entry Point - print_sign- print function that prints the sign of a number.
 * 
 * @n: the input number is a integer
 *Description: 'determines if the input isgreater, equal or less than zero
 *
 *
 * Return: 1 and prints + if n is greater than 0 else return 0 and print 0 if n=0  otherwise print -1 if n is less than zero and return -1 (Success)
*/

int print_sign(int n)
{
if (n > 0)
_putchar(43);
return (1);
else if (n < 0)
_putchar(45);
return (-1);
else (n == 0)
_putchar(48);
return (0);
_putchar('\n')
}
