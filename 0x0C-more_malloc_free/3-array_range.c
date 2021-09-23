#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min - start range
* @max - ending of search
* Return - pointer to array.
*/

int *array_range(int min,int max)
{
int *cp;
unsigned int i, size = (max - min + 1);


if (min > max)
return (NULL);
cp = malloc(sizeof(int) *size);

if (cp == NULL)
return (NULL);

for (i = 0; i < size; i++)
cp[i] = min++;

return (cp);
}
