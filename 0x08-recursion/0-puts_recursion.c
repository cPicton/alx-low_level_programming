#include "main.h"

/**
* void _puts_recursion - a function that prints a string, followed by a new line.
* @s: string to print
*/

void _puts_recursion(char *s)

{
int y = 0;

while (s[y])
{
_putchar(s[y]);
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}

