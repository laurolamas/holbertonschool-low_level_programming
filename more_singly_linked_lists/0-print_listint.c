#include "lists.h"

/**
 * print_list - Print List
 *
 * @h: head
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
	{
			printf("%i\n", h->n);

	}

	return (i);

}
