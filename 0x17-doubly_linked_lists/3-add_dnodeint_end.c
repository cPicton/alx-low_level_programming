#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to head node of the list
 * @n: data to be added to the new node
 * Return: node address or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (free(node), NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = node;
		return (node);
	}
	while ((*ptr).next != NULL)
	{
		ptr = (*ptr).next;
	}
	node->prev = *head;
	*head = node;


	return (node);

}
