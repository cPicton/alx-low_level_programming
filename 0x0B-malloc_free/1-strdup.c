#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
char *neow, *str;
if (str == NULL)
return (NULL);
neow = (char *)malloc(sizeof(char) * (strlen(str) + 1));
str = neow;
if (str == NULL)
return (NULL);
strcpy(neow, str);
return (neow);
}
