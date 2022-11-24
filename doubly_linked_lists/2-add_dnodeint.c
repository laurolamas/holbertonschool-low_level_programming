#include "lists.h"

/**
 * add_dnodeint - Add Node
 * @head: head
 * @n: n
 * Return: New Node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;

	node->next = *head;

	node->prev = NULL;

	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}
