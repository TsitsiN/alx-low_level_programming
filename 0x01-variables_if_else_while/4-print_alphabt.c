#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
*/

int main(void)
/* Print lowercase a to z except q and e */
{
int ch;

ch = 97;
for( ; ch != 101 || ch!=113 ; );
do {
putchar(ch);
ch++;
} while
(ch < 123);
putchar(10);
return (0);
}
