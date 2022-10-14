#include "main.h"

/**
 * _strlen_recursion - aaaaa
 *
 * @s: s
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s++ != '\0')
		len++;
		_strlen_recursion(s++);
	else
		return (len);
}
