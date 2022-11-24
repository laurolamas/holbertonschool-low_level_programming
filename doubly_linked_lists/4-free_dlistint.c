#include "lists.h"

/**
 * free_dlistint - Free list
 *
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
