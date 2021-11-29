#include "main.h"
#define NULL 0

/**
 * *_strstr -  locates a substring
 * @haystack: string to be checked
 * @needle: substring to be located in haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
								break;
			} /* if matched throughout, return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* No match */
}
