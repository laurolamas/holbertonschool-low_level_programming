#include "main.h"
/**
 * _isdigit - Checks if uppercase
 * @c: Input value
 * Return: 1 if uppercase, 0 if else
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
