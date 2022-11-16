#include "lists.h"

/**
 * pop_listint - pop
 * @head: heaad
 * Return: return
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data = 0;

	if (!head || !*head)
		return (0);

	ptr = (*head)->next;

	data = (*head)->n;

	free(*head);

	*head = ptr;

	return (data);
}
