#include "hash_tables.h"

/**
 * get_last_element - get
 * @ht: ht
 * Return: last
 */

unsigned long int get_last_element(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int count;


	for (i = 0 ; i < ht->size; i++)
	{
		if (ht->array[i])
			count = i;
	}

	return (count);
}

/**
 * hash_table_print - hash_table_print
 * @ht: ht
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	unsigned long int last;

	if (!ht)
		return;


	last = get_last_element(ht);

	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("'%s': '%s'", p->key, p->value);
			if (i != last)
				printf(", ");
			p = p->next;
		}
	}
	printf("}\n");
}

