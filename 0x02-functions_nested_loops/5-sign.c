#include "main.h"

/* more headers goes there */
/**
 * print_sign - Entry point
 *
 * Description:  'determines if the input isgreater, equal or less than zero'
 *
 *@n: the input number is a integer
 *
 * Return: 1 prints + if n is greater than 0 else return 0
 * and print 0 if n=0 * otherwise print -1 if n is less than zero
 * return -1 (Success)
 *
 */
int print_sign(int n)
{
if (n > 0)
{_putchar(43);
return (1); }
else if (n < 0)
{_putchar(45);
return (-1); }
else
_putchar(48);
return (0);
_putchar('\n');
}


