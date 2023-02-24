#include "main.h"

/* more headers goes there */
/**
 * print_most_numbers - function prints numbers
 *
 * Description:  'Checks digit input.'
 *
 *
 * Return: 0 Success.
 *
 */
void print_most_numbers(void)
{
int c;

for (c = 48; c < 58; c++)
{
if (c != 50)
{
if (c != 52)
{
_putchar(c);
}
}
}
_putchar('\n');
}
