#include "main.h"
/**
* _puts - prints a string
* Description: function that prints a string
* @s: string to be printed
*/
void _puts(char *s)
{
while (*s)
{
_putchar(*s);
s++;
}
_putchar('\n');
}
