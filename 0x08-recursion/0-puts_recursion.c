#include "main.h"

/**
* _puts_recursion - functions like puts
* @s: input - the input to be printed
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s);
{
if (*s)
{
_putchar(*s);
puts_recursion(s + 1);
}
else
_putchar('\n');
}
