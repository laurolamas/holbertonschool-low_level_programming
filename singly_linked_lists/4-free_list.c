#include "lists.h"

/**
 * free_list - Free list
 *
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
