#include "main.h"

/* more headers goes there */
/**
 * _isupper - case check function
 *
 * Description:  'Checks fior uppercase character.'
 *
 *@c: the input character
 *
 * Return: 1 if c is upper case , otherwise return 0.
 *
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);

else
return (0);
}
