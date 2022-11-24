#include "lists.h"

/**
 * print_dlistint - print_dlistint
 * @h: h
 * Return: len
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("0\n");

		h = h->next;
	}

	return (i);
}
