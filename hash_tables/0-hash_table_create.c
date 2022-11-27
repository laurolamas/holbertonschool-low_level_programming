#include "hash_tables.h"

/**
 * hash_table_create - Create Hash Table
 * @size: size
 * Return: Pointer to newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable = NULL;
	hash_node_t *array;

	newtable = malloc(sizeof(hash_table_t));

	if (!newtable)
		return (NULL);

	newtable->size = size;

	array = malloc(sizeof(array) * size);

	if (!array)
		return (NULL);

	newtable->array = &array;

	return (newtable);
}
