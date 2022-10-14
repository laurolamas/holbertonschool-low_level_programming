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
	_putchar(*s);

	if (*s++ != '\0')
		_puts_recursion(s++);
	else
		_putchar('\n')
}
