#include "main.h"

/**
 * clear_bit - clear bit
 * @n: n
 * @index: index
 * Return: return
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
