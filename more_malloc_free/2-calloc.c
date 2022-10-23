#include <stdlib.h>

/**
 * _calloc - calloc
 *
 * @nmemb: nmemb
 * @size:
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = 0;

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	return (ptr);
}
