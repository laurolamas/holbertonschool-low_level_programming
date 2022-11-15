#include "lists.h"

/**
 * list_len - List len
 *
 * @h: head
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);

}
