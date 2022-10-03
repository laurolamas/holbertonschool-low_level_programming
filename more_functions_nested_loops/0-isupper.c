#include "main.h"
/**
 * _isupper - Checks if uppercase
 * @c: Input value
 * Return: 1 if uppercase, 0 if else
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
