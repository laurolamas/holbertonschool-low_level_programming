#include "main.h"

/**
 * leet - 1337
 *
 * @str: string
 *
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;
	char code[5] = {'4', '3', '0', '7', '1'};
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = code[j];
		}
	}

	return (str);
}
