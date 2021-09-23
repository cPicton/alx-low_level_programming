#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - allocates a memory using malloc.
* unsigned int b - size of the byte
* Return -Pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{

void  *c;
c = malloc(b);
if (c == NULL)
exit(98);

return (c);
}

