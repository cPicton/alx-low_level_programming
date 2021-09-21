#include "main.h"
#include <stdio.h>
/**
* _puts - prints string followed by newline
*  @str: pointer to string.
*
*  Return: void
*/
void _puts(char *str)
{
int y = 0;

while (str[y])
{
_putchar(str[y]);
y++;
}
_putchar('\n');
}
