#include "main.h"

/* more headers goes there */
/**
 * print_numbers - digit check function
 *
 * Description:  'Checks digit input.'
 *
 *@c: the input integer
 *
 * Return: 0 Success.
 *
 */
int print_numbers(int c)
{
c = 48;  
for ( ; c <= 57; c++)
{
_putchar(c);
_putchar(10);
/* 10 is the ASCII code for newline */
}
return (0);
}
