#include "main.h"
/**
 * print_triangle - Checks if uppercase
 * @n: Input number
 */
void print_triangle(int n)
{
	int j;
	int k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = j; k > 0; k--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
