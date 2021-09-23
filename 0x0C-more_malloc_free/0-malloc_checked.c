#include "main.h"
#include <stdlib.h>


/**
* malloc_checked - allocates a memory using malloc.
* @b - size of the byte to be allocated
* Return - Pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{

void *c = malloc(b);

if (c == NULL)
exit(98);

return (c);
}

