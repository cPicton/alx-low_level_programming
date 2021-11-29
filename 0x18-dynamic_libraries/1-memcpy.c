#include "main.h"
/**
 * *_memcpy -  copies memory area
 * @dest: copied memory address
 * @src: memory area to be copied
 * @n: size of memory area to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	if (!*src)
	{
		while (*dest && n--)
		{
			*dest++ = 0;
		}
	}
	return (p);
}
