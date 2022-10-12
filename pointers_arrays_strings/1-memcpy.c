#include "main.h"

/**
 * _memcpy - memset
 *
 * @dest: s
 * @src: b
 * @n: n
 *
 * Return: aaaa
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
