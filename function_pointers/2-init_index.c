#include <stdlib.h>

/**
 * int_index - int index
 *
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && size && array)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
