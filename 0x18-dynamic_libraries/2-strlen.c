#include "main.h"
/**
* _strlen - returns length of string
* Description: function that returns the length of a string
* @s: character whose length will be returned
* Return: length of the string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (*s)
{
i += 1;
s++;
}
return (i);
}
