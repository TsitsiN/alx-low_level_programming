#include "main.h"

/* more headers goes there */
/**
 * _islower - print function that checks for lowercase characters - Entry point
 *
 * @c: c is an ASCII integer
 *Description: 'print parameters'
 *
 *
 * Return: 1 if it is a lower case and 0 otherwise (Success)
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
