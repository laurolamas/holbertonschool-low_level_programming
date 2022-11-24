#include "lists.h"

/**
 * dlistint_len - List len
 *
 * @h: head
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);

}
