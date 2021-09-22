#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
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
len1++;
while (s2[len2] != '\0')
len2++;

neow = malloc(sizeof(char) * (len1 + len2));

if (neow == NULL)
return (NULL);

a = 0;
while (a < len1)
{
neow[a] = s1[a];
a++;
}
while (b < len2)
{
neow[a] = (s2[b];
a++, b++;
}

return (neow);
}
