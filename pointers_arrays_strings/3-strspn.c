#include "main.h"

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
	int fin = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j] && init == 0)
				init = i;

	for (j = 0; accept[j] != '\0'; j++)
                        if (s[0] == accept[j])
                                init = 0;
	
	for (i = init; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] != accept[j]  && fin == 0)
				fin = i;

	return (fin - init);
}
