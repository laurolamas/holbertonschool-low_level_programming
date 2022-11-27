#include "hash_tables.h"
#include <string.h>

/**
 * add_node - Add Node
 * @head: head
 * @key: key
 * @value: value
 * Return: 1 on success
 */

int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);

	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = *head;
	*head = node;

	return (1);
}

/**
 * hash_table_set - hash_table_set
 * @ht: ht
 * @key: key
 * @value: value
 * Return: 1 on succes
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;

	index = key_index((unsigned char *)key, ht->size);

	return (add_node(&((ht->array)[index]), key, value));
}
