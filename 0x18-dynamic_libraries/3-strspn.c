#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: bytes to take
 * Return: number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, f;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			f = 0;
			if (*s == accept[i])
			{
				res++;
				f = 1;
				break;
			}
		}
		if (!f)
		{
			break;
		}
		s++;
	}
	return (res);
}
