#include <stdlib.h>

/**
 * _strdup - strdup
 *
 * @str: str
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i;
	char *cpy = NULL;

	if (str)
	{
		if (str[0] == '\0')
		{
			cpy = malloc(1);
			cpy[0] = '\0';
			return (cpy);
		}

		for (i = 0; str[i] != '\0'; i++)
			continue;

		cpy = malloc(i + 1);

		if (cpy)
		{

			for (i = 0; str[i] != '\0'; i++)
				cpy[i] = str[i];

			cpy[i] = '\0';

			return (cpy);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
