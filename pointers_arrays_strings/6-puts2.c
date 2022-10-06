#include "main.h"

/**
 * puts2 - aaaaaaa
 * @str: aaaaaaa
 * Return: bbbbbbb
 */

void puts2(char *str)
{
	int i = 0;
	int len;

	for (; str[i] != '\0'; i++)
		continue;
	len = i;

	for (i = 0; (str[i] != '\0') && (i < len); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
