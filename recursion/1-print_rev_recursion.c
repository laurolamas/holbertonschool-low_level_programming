#include "main.h"

/**
 * _strlen - aaaaa
 *
 * @s: s
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '0'; i++)
		continue;

	return (i - 1);
}

/**
 * _print_rev_recursion - aaaaa
 *
 * @s: s
 *
 * Return: length
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = _strlen(s);
	s += len;
	_putchar(*s);

	if (*s-- != '\0')
		_print_rev_recursion(s--);
	else
		_putchar('\n');

}
