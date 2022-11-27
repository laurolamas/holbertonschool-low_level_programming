#include "hash_tables.h"

/**
 * hash_table_delete - Delete Hash Table
 * @ht: ht
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			free((ht->array[i])->key);
			free((ht->array[i])->value);
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
