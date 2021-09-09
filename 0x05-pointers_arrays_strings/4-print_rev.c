#include "main.h"
#include <stdio.h>

/**
*  print_rev - Prints a string in reverse followed by a new line
*
* @s: Pointer to use
*
* Return: void
*/

void print_rev(char *s)
{
int a = 0;

while (s[a])
{
a++;
}

while (a--)
{
_putchar(s[a]);
}

_putchar('\n');
}
