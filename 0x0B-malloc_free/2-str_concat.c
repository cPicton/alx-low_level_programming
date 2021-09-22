#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* str_concat - concatenates 2 strings and returns a pointer to the result
* @s1: string to concetenate
* @s2: another one
*
* Return: pointer to result string
*/

char *str_concat(char *s1, char *s2)
{
char *neow;
int len1 = 0, len2 = 0, a, b;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
len2++;

neow = malloc((len1 + len2) *sizeof(*s1));
if (neow == NULL)
return (NULL);
a = 0;
while (a < len1)
{
neow[a] = s1[a];

a++;
}
b = 0;
while (b <= len2)
{
neow[a] = s2[b];
a++;
b++;
}

return (neow);
}
