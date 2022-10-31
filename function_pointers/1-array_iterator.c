#include <stdlib.h>

/**
 * array_iterator - array iterator
 *
 * @array: array
 * @size: size
 * @action: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && size && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
