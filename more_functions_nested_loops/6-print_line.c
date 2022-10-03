#include "main.h"
/**
 * print_line - Checks if uppercase
 * @n: Input number
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
