#include "lists.h"

/**
 * delete_dnodeint_at_index - delete
 * @head: head
 * @index: index
 * Return: return
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = *head;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head)->prev)
			(*head)->prev = NULL;
		free(ptr);
		if (!((*head)->next))
			*head = NULL;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (ptr->next)
			ptr = ptr->next;
		else
			return (-1);
	}

	(ptr->prev)->next = ptr->next;
	if (ptr->next)
		(ptr->next)->prev = ptr->prev;
	free(ptr);
	return (1);
}
