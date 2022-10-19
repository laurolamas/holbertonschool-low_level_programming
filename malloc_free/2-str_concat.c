#include <stdlib.h>
#include "main.h"

/**
 * str_concat - str
 *
 * @s1: s1
 * @s2: s2
 *
 * Return: str
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *con = NULL;

	con = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (con)
	{
		for (i = 0; i < _strlen(s1) + _strlen(s2); i++)
		{
			if (i < _strlen(s1))
			{
				con[i] = s1[i];
			}
			else
			{
				con[i] = s2[i - _strlen(s1)];
			}
		}
		return (con);
	}
	else
	{
		_putchar('a');
		return (NULL);
	}
}
