#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %ts ", sizeof(char));
printf("Size of an int: %ts ", sizeof(int));
printf("Size of a long int: %ts ", sizeof(long int));
printf("Size of a long long int: %ts ", sizeof(double));
printf("Size of a float: %ts ", sizeof(float));

return (0);
}
