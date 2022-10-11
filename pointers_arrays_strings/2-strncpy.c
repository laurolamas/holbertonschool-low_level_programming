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
	int lendest;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

//	lendest = i;

//	if (src[0] != '\0')
//	{
//		for (i = 0; i < n; i++)
//			dest[lendest + i] = src[i];
//	}
//		return (dest);
}
