#include "main.h"

/**
 * puts_half - aaaaaaa
 * @str: aaaaaaa
 * Return: bbbbbbb
 */

void puts_half(char *str)
{
	int i = 0;
	int len;

	for (; str[i] != '\0'; i++)
		continue;
	len = i;

	for (i = (len / 2); (str[i] != '\0'); i++)
		_putchar(str[i]);

	_putchar('\n');
}
