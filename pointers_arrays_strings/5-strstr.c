#include "main.h"

/**
 * _strstr - memset
 *
 * @haystack: s
 * @needle: b
 *
 * Return: aaaa
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int lenneedle = 0;

	for (j = 0; needle[j] != '\0'; j++)
		continue;
	len2= j-1
		
	for (i = 0; haystack[i] != '\0'; i++)
	{
			if (haystack[i] == needle[0])
				if (haystack[i + len2] == needle[len2])
					return (&haystack[i]);
	}
	return ('\0');
}
