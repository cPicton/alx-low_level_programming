#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* print_list - prints all elements of a list
* @h: linked list
* @str: node of data
* Return: number of nodes
*/
size_t print_list(const list_t *h)

{
size_t elcount = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
elcount++;

h = h->next;
}
return (elcount);
}
