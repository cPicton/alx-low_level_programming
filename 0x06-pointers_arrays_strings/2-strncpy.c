#include "main.h"
/**
* _strncpy - function copies a string
* @dest: string to be copied into
* @src: string to be copied
* @n: portion of src to be copied into dest
* Return: returns a string - dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
