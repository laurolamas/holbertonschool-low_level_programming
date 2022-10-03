#include "main.h"
/**
 * print_triangle - Checks if uppercase
 * @n: Input number
 */
void print_triangle(int n)
{
	int j;
	int k;
	int l;

	if (n > 0)
	{
		for (j = n; j > 0; j--)
		{
			for (k = j; k > 0; k--)
			{
				_putchar(' ');
			}
			for (l = 0; l < j; l++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
