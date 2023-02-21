#include "main.h"

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'print alphabet in lowercase'
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
  char ch;
  ch=97;
    for( ;ch<123;ch++)
      _putchar(ch);
	_putchar('\n');
return (0);
}
