#include "main.h"

/* more headers goes there */
/**
 * print_numbers - digit check function
 *
 * Description:  'Checks digit input.'
 *
 *
 * Return: 0 Success.
 *
 */
void print_numbers(void)
{
int c;

for (c = 48; c <= 57; c++)
{
_putchar(c);
_putchar('\n');
/* 10 is the ASCII code for newline */
}

}
