#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers
 * Return: (0)
 */
int main(void)
{
int c, d;

for (c = 0; c < 99; c++)
{
for (d = c + 1; d < 100; d++)
{
putchar('0' + (c / 10));
putchar('0' + (c % 10));
putchar(' ');
putchar('0' + (d / 10));
putchar('0' + (d % 10));
if (c / 10 != 9 || c % 10 != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
