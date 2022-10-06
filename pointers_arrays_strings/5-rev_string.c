#include "main.h"

/**
 * rev_string - aaaaaaa
 * @s: aaaaaaa
 * Return: bbbbbbb
 */

void rev_string(char *s)
{
	int i = 0;
	int len;
	char aux;

	for (; s[i] != '\0'; i++)
		continue;

	len = i - 1;

	for (i = 0; i <= (len / 2); i++)
	{
		aux = s[i];
		s[i] = s[(len - i)];
		s[(len - i)] = aux;
	}

}
