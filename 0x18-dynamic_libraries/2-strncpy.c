#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: copied string
 * @src: string to be copied
 * @n: string copied in bytes
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
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
