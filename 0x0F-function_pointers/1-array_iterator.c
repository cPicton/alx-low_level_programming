#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function given as a parameter on each element of an array
* @array: array being passed
* @size: size of the array
* @action: pointer to the function needed to be used
* Return: 0 always
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
