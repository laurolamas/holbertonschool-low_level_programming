#include "main.h"

/**
 * _strncpy - aaaaaaa
 *
 * @dest: dest
 * @src: src
 * @n: nnnnn
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
