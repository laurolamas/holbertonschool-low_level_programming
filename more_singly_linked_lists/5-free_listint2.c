#include "lists.h"

/**
 * free_listint2 - Free list
 *
 * @head: head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
