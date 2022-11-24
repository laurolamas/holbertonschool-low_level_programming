#include "lists.h"
/**
 * get_dnodeint_at_index - aa
 * @head: head
 * @index: index
 * Return: skere
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (!head)
		return (NULL);
	ptr = head;

	for (i = 0; i < index; i++)
	{
		if (ptr->next)
			ptr = ptr->next;
		else
			return (NULL);
	}
	return (ptr);
}
