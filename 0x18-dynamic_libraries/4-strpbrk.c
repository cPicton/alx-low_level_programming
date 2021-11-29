#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containg characters to be merged
 * Return: a pointer to the byte in s that matches one of the bytes
 *  in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
