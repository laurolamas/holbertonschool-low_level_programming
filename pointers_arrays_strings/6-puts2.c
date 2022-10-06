#include "main.h"

/**
 * _puts2 - aaaaaaa
 * @str: aaaaaaa
 * Return: bbbbbbb
 */

void _puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
