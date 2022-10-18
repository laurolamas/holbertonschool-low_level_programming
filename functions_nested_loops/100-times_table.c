#include "main.h"
/**
 * print_times_table - writes times table
 * @n: n
 * Return: ints
 */
void print_times_table(int n)
{
	int a, b;
	int num = 0;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				num = (a * b);

				if (num < 10)
				{
					if (b != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(num + '0');
				}
				else if (num < 99)
				{
					 _putchar(' ');
					 _putchar((num / 10) + '0');
					 _putchar((num % 10) + '0');
				}
				else
				{
					_putchar('1');
					_putchar(((num / 10) % 10) + '0');
					_putchar((num % 10) + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar ('\n');
		}
	}
}
