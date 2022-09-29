#include "main.h"
/**
 * times_table - writes times table
 * Return: ints
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int num = 0;
	int first = 0;
	int last = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			num = (a * b);
			first = (num / 10);
			last = (num % 10);

			if (first == 0 &&  b != 0)
				_putchar(' ');
			else if (first == 0 &&  b == 0)
			{
			}
			else
				_putchar(first + '0');

			_putchar(last + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar ('\n');
	}
}
