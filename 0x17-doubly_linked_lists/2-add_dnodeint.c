#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: pointer to the list head
 * @n: new node data
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (node == NULL)
	{
		free(node->next);
		free(node->prev);
		free(node);
	}
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	(**head).prev = node;
	node->next = *head;
	*head = node;

	return (node);
}
