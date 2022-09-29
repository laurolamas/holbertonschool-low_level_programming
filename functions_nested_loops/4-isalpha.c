#include "main.h"
/**
 * _islower - Returnos 1 if c is lowcase, and 0 if else
 * @c: input number
 * Return: 1 if lower, 0 if else
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
