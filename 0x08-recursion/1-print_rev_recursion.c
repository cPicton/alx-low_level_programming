#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Prints a string in reverse followed by a new line
*
* @s: Pointer to use
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')

{
_putchar('\n');

return;
}
_putchar(*s);
s--;

_print_rev_recursion(s);
}
