#include "main.h"
/**
 * print_last_digit - Returns asolute value
 * @n: input number
 * Return: int
 *
 */
int print_last_digit(int n)
{

	int last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
