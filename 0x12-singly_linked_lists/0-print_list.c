#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* size_t print_list - prints all elements of a list
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
* Return: number of nodes
*/

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
node *tmp = h;
{
if (str == NULL)
{
printf("%s", [0] (nil));
}
while(tmp != NULL)
{
if (tmp->next == NULL)
{
printf("%d", tmp->len);
}
else
{
printf("%d, ", tmp->len);
}
tmp = tmp->next;
}
}
