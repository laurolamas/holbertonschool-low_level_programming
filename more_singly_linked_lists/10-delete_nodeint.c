#include "lists.h"
/**
 * delete_nodeint_at_index - delete
 * @head: head
 * @index: index
 * Return: return
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *prevnode = NULL;

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
