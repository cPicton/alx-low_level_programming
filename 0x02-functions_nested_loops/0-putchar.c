#include "main.h"
/**
 * main - main block
 * Description: Print a word using _putchar
 * Return: 0
 */
int main(void)
{
char a[8] = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(a[i]);
i++;
}

_putchar('\n');
return (0);
}
