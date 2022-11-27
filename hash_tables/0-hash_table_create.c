#include "hash_tables.h"

/**
 * hash_table_create - Create Hash Table
 * @size: size
 * Return: Pointer to newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newtable = NULL;

	newtable = malloc(sizeof(hash_table_t));

	if (!newtable)
		return (NULL);

	newtable->size = size;

	newtable -> array = malloc(sizeof(hash_node_t *) * size);

	if (!(newtable->array))
		return (NULL);

	for (i = 0; i < size; i++)
		(newtable->array)[i] = NULL;

	return (newtable);
}
