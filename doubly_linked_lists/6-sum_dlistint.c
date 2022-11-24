#include "lists.h"
/**
 * sum_dlistint - a
 * @head: head
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
		dlistint_t *ptr = head;
		int count = 0;

	if (ptr)
	{
		while (ptr->next)
		{
			count += ptr->n;
			ptr = ptr->next;
		}
		count += ptr->n;
	}
		return (count);
}
