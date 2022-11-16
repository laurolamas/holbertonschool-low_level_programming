#include "lists.h"

/**
 * free_list - Free list
 *
 * @head: head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
