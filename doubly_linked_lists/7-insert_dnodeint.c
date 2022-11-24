#include "lists.h"

/**
 * len - List len
 *
 * @h: head
 *
 * Return: count
 */

size_t len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);

}

/**
 * insert_dnodeint_at_index - Insert
 * @h: head
 * @idx: index
 * @n: n
 * Return: return
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *nextnode = *h;
	dlistint_t *prevnode = NULL;
	dlistint_t *newnode = NULL;

	if (!h)
		return (NULL);

	if ((len(*h)) == idx)
		return (add_dnodeint_end(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
			prevnode = nextnode;

		if (nextnode->next)
			nextnode = nextnode->next;
		else
			return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = nextnode;
	newnode->prev = prevnode;
	nextnode->prev = newnode;
	prevnode->next = newnode;
	return (newnode);
}
