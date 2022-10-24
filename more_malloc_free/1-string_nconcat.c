#include <stdlib.h>

/**
 * _strlen - aaaaaaa
 * @s: aaaaaaa
 * Return: bbbbbbb
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;

	return	(i);
}
/**
 * string_nconcat - str
 *
 * @s1: s1
 * @s2: s2
 * @n: n
 *
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, newn;
	char *con = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	newn = n;

	if (newn > _strlen(s2))
		newn = _strlen(s2);

	con = malloc(_strlen(s1) + newn + 1);

	if (con)
	{
		for (i = 0; i < _strlen(s1) + newn; i++)
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
		con[_strlen(s1) + newn + 1] = '\0';
		return (con);
	}
	else
	{
		return (NULL);
	}
}
