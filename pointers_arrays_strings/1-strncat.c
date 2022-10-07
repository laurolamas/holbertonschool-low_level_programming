#include "main.h"

/**
 * _strncat - aaaaaaa
 *
 * @dest: dest
 * @src: src
 * @n: nnnnn
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lendest;

	for (i = 0; dest[i] != '\0'; i++)
		continue;

	lendest = i;

	for (i = 0; i < n; i++)
		dest[lendest + i] = src[i];

	return (dest);
}
