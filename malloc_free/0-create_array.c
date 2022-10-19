#include <stdlib.h>
/**
 * create_array - create
 *
 * @size: size
 * @c: c
 *
 * Return: algo
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size < 1)
		return (NULL);

	arr = malloc(size);

	if (arr)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
		return (arr);
	}
	else
		return (NULL);
}
