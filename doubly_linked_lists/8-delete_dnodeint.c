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
	dlistint_t *prevnode = NULL;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (i == (index - 1))
			prevnode = ptr;

		if (ptr->next)
			ptr = ptr->next;
		else
			return (-1);
	}
	if (!(ptr->next))
	{
		prevnode->next = NULL;
		free(ptr);
		return (1);
	}
	else
	{
		prevnode->next = ptr->next;
		free(ptr);
		return (1);
	}
}
