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

for (c = 48; c <= 57; c++)
{
while (c != 50 || c != 52) 
_putchar(c);
}
_putchar(10);
/* 10 is the ASCII code for newline */


}
