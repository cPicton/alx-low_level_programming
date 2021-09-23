#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and set all values to 0
* @nmemb - size
* @size - size of bytes
* Return - Pointer to calloc
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *cp;
char *abc;
unsigned int i;

if (nmemb == 0)
return (NULL);

if (size == 0)
return (NULL);

cp = malloc(nmemb * size);

if (cp == NULL)
return (NULL);

abc = cp;
for (i = 0; i < nmemb * size; i++)
abc[i] = '\0';

return (cp);
}

