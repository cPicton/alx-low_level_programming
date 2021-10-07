#include "lists.h"

/**
* print_list - prints all elements of list_t list
* @h: linked list
* Return: number of nodes in list
*/

size_t print_list(const list_t *h)
{
const list_t *cp;
unsigned int i;

cp = h;
for (i = 0; cp; i++)
{
printf("[%u] %s\n", cp->len, cp->str);
cp = cp->next;
}
return (i);
}
