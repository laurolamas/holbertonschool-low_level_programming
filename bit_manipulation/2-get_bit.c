#include "main.h"

/**
 * get_bit - Get bit
 * @n: number
 * @index: index
 * Return: return
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) != 0)
		return (1);
	else
		return (0);
}
