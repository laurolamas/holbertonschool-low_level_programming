#include "main.h"
/**
 * _isalpha - Returnos 1 if c is letter, and 0 if else
 * @c: input number
 * Return: 1 if letter, 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
