#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* size_t print_list - prints all elements of a list
* @h: linked list
* Return: number of nodes
*/
size_t print_list(const list_t *h)

{
if (h->str == NULL)
{
printf("[0] (nil\n"));
}
while(h != NULL)
{
if (h->str == NULL)
{
printf("%d", h-->len);
}
else
{
printf("%d, ", h->len, h->tr);
}
h = h->next;
}
}
