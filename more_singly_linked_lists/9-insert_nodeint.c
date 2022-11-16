#include "lists.h"
/**
 * insert_nodeint_at_index - Insert
 * @head: head
 * @idx: index
 * @n: n
 * Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *prevnode = NULL;
	listint_t *newnode = NULL;

	if (!head)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
			prevnode = ptr;

		if (ptr->next)
			ptr = ptr->next;
		else
			return (NULL);
	}

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = ptr;
	if (idx && *head)
		prevnode->next = newnode;
	else
		*head = newnode;

	return (newnode);
}
