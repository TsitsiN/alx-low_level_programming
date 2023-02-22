#include "main.h"

/* more headers goes there */
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'print 10 times the alphabet'
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int i;
char ch;

for (i = 1; i < 11; i++)
{

for (ch = 97; ch < 123; ch++)
{
_putchar(ch);
_putchar('\n');
}
}
}
