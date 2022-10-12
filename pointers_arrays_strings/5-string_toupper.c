#include "main.h"
/**
 *
 *
 *
 */
char *string_toupper(char *str)
{
	int i;
	char aux;

	for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}

}
