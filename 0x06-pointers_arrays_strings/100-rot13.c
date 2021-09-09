#include "main.h"

/**
* rot13 - encodes a string
* Return: string
*/

char *rot13(char *y)
{
int i, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; y[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (y[i] == a[j])
{
y[i] == b[j];
break;
}
}
}
return (y);
}
