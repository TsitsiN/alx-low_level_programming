#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char charType;
int intType;
long longType;
float floatType;

printf("Size of a char: %ts ", sizeof(charType));
printf("Size of an int: %ts ", sizeof(intType));
printf("Size of a long int: %ts ",sizeof(longType));
printf("Size of a long long int: %ts ", sizeof(longType));
printf("Size of a float: %ts ", sizeof(floatType));
  
return (0);
}
