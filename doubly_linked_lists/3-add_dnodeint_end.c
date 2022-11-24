#include "lists.h"

/**
 * add_dnodeint_end - Add Node end
 * @head: head
 * @n: n
 * Return: New Node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *ptr = *head;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;

	node->next = NULL;

	node->prev = NULL;

	if (!*head)
		*head = node;

	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
		node->prev = ptr;
	}

	return (node);
}
