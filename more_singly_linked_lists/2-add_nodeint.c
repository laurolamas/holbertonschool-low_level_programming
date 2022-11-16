#include "lists.h"

/**
 * add_node - Add Node
 * @head: head
 * @str: str
 * Return: New Node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
