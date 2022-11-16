#include "lists.h"

/**
 * add_nodeint_end - Add Node end
 * @head: head
 * @n: n
 * Return: New Node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *ptr = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;

	node->next = NULL;

	if (!*head)
		*head = node;

	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}

	return (node);
}
