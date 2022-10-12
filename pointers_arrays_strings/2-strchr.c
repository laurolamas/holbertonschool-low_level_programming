#include "main.h"

/**
 * _strchr - memset
 *
 * @s: s
 * @c: b
 *
 * Return: aaaa
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);

	return ('\0');
}
