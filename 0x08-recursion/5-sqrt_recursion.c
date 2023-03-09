#include "main.h"

/**
* _sqrt_recursion - returns the natural square root.
*
* Return: square root of n
*         -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (square(n, 0));
}
