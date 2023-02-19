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
/* Program prints all possible combinations of single-digit numbers*/
{
int i=0;

 while(i<=9)
   { putchar (i+'0');
     /*  i++; */
     if (i==9)
       break;
     i++;
     putchar(',');
     putchar(' ');
   }
 putchar ('9');
 return(0);
}
