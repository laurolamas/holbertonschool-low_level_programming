#include "main.h"
/**
 * jack_bauer - aaaaahhh
 * Return: kdsksks
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (hour; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}

	}

}
