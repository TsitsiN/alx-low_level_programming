#include "main.h"

/* more headers goes there */
/**
 * _isdigit - digit check function
 *
 * Description:  'Checks digit input.'
 *
 *@c: the input character
 *
 * Return: 1 if c is upper case , otherwise return 0.
 *
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

else
return (0);
}
