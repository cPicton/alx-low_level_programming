#include "function_pointers_h"
#include <stddef.h>
#include <stdlib.h>
/**
* int_index - searches for an integer
* @array - array
* @size - size of the array
* @cmp -  pointer to the function to be used to compare values
* Return: index where integer is found, -1 if not found or array absent
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i, abc;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
abc = cmp(array[i]);
if (abc != 0)
return (i);
}
return (-1);
}
