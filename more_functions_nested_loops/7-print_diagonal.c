#include "main.h"
/**
 * print_diagonal - Checks if uppercase
 * @n: Input number
 */
void print_diagonal(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (int k =0; k < j; k++)
				_putchar(' ')
			_putchar('\\');
			_putchar('$');
			_putchar('\n');
		}	



	}
	else
        	_putchar('$');

	_putchar('\n');
}
