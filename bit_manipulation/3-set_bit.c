#include "main.h"

/**
 * set_bit - Set bit
 * @n: n
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1 << index);

	if ((*n & mask) | (1 << index))
	{
		*n = (*n & mask) | (1 << index);
		return (1);
	}
	else
		return (0);
}
