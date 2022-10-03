#include "main.h"
/**
 * more_numbers - Checks if uppercase
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
		if (i > 9)
			_putchar((i / 10) + '0');
		_putchar ((i % 10) + '0')
	_putchar('\n');
}
