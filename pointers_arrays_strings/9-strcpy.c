#include "main.h"

/**
 * _strcpy - aaaaaaa
 *
 * @dest: dest
 * @src: src
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	src[i] = '\0';
	return (dest);
}
