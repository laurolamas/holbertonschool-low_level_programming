#include "hash_tables.h"
#include <string.h>

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

	if (((ht->array)[index]) != NULL)
		index = 0;
	else 
	{
		((ht->array)[index]) = malloc(sizeof(hash_node_t));

		if (!((ht->array)[index]))
			return (0);
	}

	((ht->array)[index])->key = strdup(key);


	((ht->array)[index])->value = strdup(value);



	return (1);
}
