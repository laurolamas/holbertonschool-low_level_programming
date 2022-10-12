#include "main.h"
/**
 * cap_string - aaaa
 * @str: str
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	int j;
	bool isFirst = false;

	char p [13] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (str[i] = p[j])
					str[i] -= 32;
			}
		}


	}

	return (str);
}
