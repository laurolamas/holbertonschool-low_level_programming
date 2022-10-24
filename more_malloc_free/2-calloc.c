#include <stdlib.h>
#include <string.h>

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

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	memset(ptr, 0, (nmemb * size));

	return (ptr);
}
