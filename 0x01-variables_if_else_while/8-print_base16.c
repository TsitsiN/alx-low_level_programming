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
/* Prints all numbers of base 16 in lowercase */
{
int ch, CH;

ch = 48;
do {
putchar(ch);
ch++;
} while (ch < 58);
CH = 97;
do {
putchar(CH);
CH++;
} while (CH < 103);
putchar(10);
return (0);
}
