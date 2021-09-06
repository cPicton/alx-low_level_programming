#include "main.h"

/**
 * _puts - prints a string, str, with newline
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
int count = 0;

while (*(str + count) != '\0')
{
if (*(str + count) != '"')
_putchar(*(str + count));
count++;
}
_putchar('\n');
}
