#include "lists.h"

/**
 * print_list - Print List
 *
 * @h: head
 *
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}

	return (i);

}
