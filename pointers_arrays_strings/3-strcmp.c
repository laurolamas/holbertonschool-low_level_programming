#include "main.h"
/**
 * _strcmp - strcmp
 *
 * @s1: str1
 * @s2: str2
 *
 * Return: Number
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int ret = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		continue;


	ret = s1[i] - s2[i];

	return (ret);

}
