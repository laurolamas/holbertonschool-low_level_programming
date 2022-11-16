#include "lists.h"

/**
 * add_node_end - Add Node end
 * @head: head
 * @str: str
 * Return: New Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL;
	list_t *ptr = *head;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);

	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);

	node->next = NULL;

	if (!*head)
		*head = node;


	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}

	return (node);
}
