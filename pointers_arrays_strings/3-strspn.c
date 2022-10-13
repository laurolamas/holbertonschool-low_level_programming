#include "main.h"
#include <stdio.h>

/**
 * _strspn - memset
 *
 * @s: s
 * @accept: b
 *
 * Return: aaaa
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int init = 0;
	int foundMatch = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		foundMatch = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				foundMatch = 1;
				break;
			}
		if (foundMatch)
			init++;
		else
			break;
	}

	return (init);
}
