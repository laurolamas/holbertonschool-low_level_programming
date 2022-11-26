#include "hash_tables.h"

/**
 * hash_table_create - Create Hash Table
 * @size: size
 * Return: Pointer to newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable = NULL;

	newtable = malloc(sizeof(hash_table_t));

	newtable->size = size;

	return(newtable);
}
