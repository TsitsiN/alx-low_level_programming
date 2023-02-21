#include "main.h"

/* more headers goes there */
/**
 * print_alphabet - Entry point
 *
 * Description: 'print alphabet in lowercase'
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
char ch;
ch = 97;
for (; ch < 123; ch++)
_putchar(ch);
_putchar('\n');
}
