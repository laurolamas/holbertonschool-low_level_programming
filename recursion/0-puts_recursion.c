#include "main.h"

/**
 * _puts_recursion - aaaaa
 *
 * @s: s
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(s++);
}
