#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int num;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, num = 0; (i >>= 1) > 0; num++)
		;

	for (; num >= 0; num--)
	{
		if ((n >> num) & 1)
			printf("1");
		else
			printf("0");
	}
}
