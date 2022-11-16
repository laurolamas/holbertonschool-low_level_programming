#include "lists.h"
/**
 * get_nodeint_at_index - aa
 * @head: head
 * @index: index
 * Return: skere
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

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
