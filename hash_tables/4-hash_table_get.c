#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Get value of key
 * @ht: ht
 * @key: key
 * Return: Value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (!ht || !key)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		if (((ht->array)[i]) && (strcmp(((ht->array)[i])->key, key) == 0))
			return ((ht->array)[i]->value);
	}
	return (NULL);
}
