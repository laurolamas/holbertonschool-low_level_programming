#include "main.h"
/**
 * print_sign - Retsdvdsv
 * * @c: input number
 * Return: 1 if ledssdsctter, 0 if else
 */

int print_sign(int c)
{
	if (c == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		if (c > 0)
		{
			_putchar ('+');
			return (1);
		}
		else
		{
			_putchar ('-');
			return (-1);
		}
	}
}
