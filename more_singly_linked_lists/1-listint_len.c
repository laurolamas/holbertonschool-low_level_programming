#include "lists.h"

/**
 * listint_len - List len
 *
 * @h: head
 *
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);

}
