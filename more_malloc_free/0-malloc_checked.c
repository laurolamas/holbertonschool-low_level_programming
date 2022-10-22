#include <stdlib.h>

/**
 * malloc_checked - Check malloc
 *
 * @b: b
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
