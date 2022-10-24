#include <stdlib.h>

/**
 * array_range - array_range
 *
 * @min: min
 * @max: max
 *
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;
	int val = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr)
	{
		for (i = 0; i < max - min + 1; i++, val++)
			ptr[i] = val;
		return (ptr);
	}
	else
		return (NULL);
}
