#include "main.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @c: pointer to the string to convert
 * Return: the converted string.
 */

char *string_toupper(char *x)
{
int abc;

abc = 0;

while (x[abc] != '\0')
{
if (x[abc] >= 97 && x[abc] <= 122)
{
x[abc] = x[abc] - 32;
		}
abc++;
}
return (x);
}
