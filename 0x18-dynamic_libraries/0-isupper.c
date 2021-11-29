#include "main.h"

/**
* _isupper - checks for uppercase characters
* @c: interger
* Return: 1 for true, 0 for false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
