#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number
 * @index: index starting from 0,of the wanted bit
 * Return: Value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits;

	if (index > 64)
		return (-1);

	bits = n >> index;

	return (bits & 1);
}
