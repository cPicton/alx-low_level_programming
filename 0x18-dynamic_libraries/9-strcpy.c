#include "main.h"
/**
* *_strcpy - copies the string to the buffer pointed to by dest
* @dest: copied string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src)
{
*dest++ = *src++;
}
*dest = 0;
return (p);
}
