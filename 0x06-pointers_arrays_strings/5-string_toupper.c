#include "main.h"
/**
* string_toupper - converts all lowercase letters of a string to uppercase.
* @c: pointer to the string to convert
* Return: n
*/

char *string_toupper(char *x)
{
int abc;

abc = 0;

while (x[abc] != '\0')
{
if (x[abc] >= 'a' && x[abc] <= 'z')
x[abc] = x[abc] - 32;

abc++;
}
return (x);
}
