#include "main.h"
/**
 * _strcmp - compares two strings, ending at the first byte that is different.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first character that are not the same
 */

int _strcmp(char *s1, char *s2)
{
int i, compVal;

i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}

compVal = s1[i] - s2[i];
return (compVal);
}
