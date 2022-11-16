#include "lists.h"
/**
 * sum_listint - a
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
		listint_t *ptr = head;
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
