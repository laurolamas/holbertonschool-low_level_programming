#include "main.h"

/**
 * _strcat - aaaaaaa
 *
 * @dest: dest
 * @src: src
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lendest;

	for (i = 0; dest[i] != '\0'; i++)
		continue;

	lendest = i;

	for (i = 0; src[i] != '\0'; i++)
		dest[lendest + i] = src[i];

	return (dest);
}
