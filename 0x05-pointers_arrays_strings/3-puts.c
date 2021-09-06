#include "main.h"
/**
 *_puts - prints string followed by newline.
 *@str: pointer to string.
 *
 *Return: void.
 */
void _puts(char *str)
{
int x;

x = 0;
while (*str != '\0')
{
_putchar(*str);
x++;
str++;
}
_putchar('\n');
}
