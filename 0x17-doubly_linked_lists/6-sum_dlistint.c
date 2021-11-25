#include "lists.h"

/**
 * sum_dlistint - get sum of data in doubly linked list
 * @head: pointer to head of doubly linked list
 * Return: add
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (!head)
		return (add);

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
