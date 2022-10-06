#include "main.h"

/**
 * print_rev - aaaaaaa
 * @s: aaaaaaa
 * Return: bbbbbbb
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
