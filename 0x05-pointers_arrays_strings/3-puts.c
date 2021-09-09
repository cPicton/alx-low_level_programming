include "main.h"

/**
* _puts - Print a string followed by a newline to stdout
*
* @str: Pointer to use
*
*  Return: void
*/

void _puts(char *str)
{
int a = 0;

while (str[a])
{
_putchar(str[a]);
a++;
}

_putchar('\n');
}
}
}
