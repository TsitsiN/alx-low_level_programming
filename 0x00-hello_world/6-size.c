#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu bytes(s)\n", sizeof(int));
printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(double));
printf("Size of a float: %zu byte(s)", sizeof(float));
return (0);
}
