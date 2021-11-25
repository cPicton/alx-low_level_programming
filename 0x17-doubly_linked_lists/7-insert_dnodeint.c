#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a specific index
 * @h: list pointer
 * @idx: index of insertion
 * @n: data for the new node
 * Return: node address or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (node == NULL)
		return (free(node), NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	ptr = *h;
	if (ptr == NULL)
	{
		*h = node;
		return (node);
	}
	while (ptr != NULL)
	{
		if (count == idx)
		{
			ptr->prev = node;
			node->next = ptr->next;
			node->prev = ptr->prev;
			return (node);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
