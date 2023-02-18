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
/* Print lowercase a to z */
{
int ch, CH ;

ch = 97;
do {
putchar(ch);
ch++;
} while (ch < 123);
CH = 65;
do {
putchar(CH);
CH++;
} while (CH < 91);
putchar(10);
return (0);
}
