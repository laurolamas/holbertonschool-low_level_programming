#include "main.h"

/**
 * _pow - Returns a ^ b
 * @a: a
 * @b: b
 * Return: num
 */

unsigned long int _pow(unsigned long int a, unsigned long int b)
{
	unsigned long int i;
	unsigned long int pow = 1;

	for (i = 0; i < b; i++)
	{
		pow = pow * a;
	}

	return (pow);
}

/**
 * binary_to_uint - a
 * @b: b
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int j;
	int i;
	unsigned long int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		if (!(b[i] == '1' || b[i] == '0'))
			return (0);

	for (j = 0; i >= 0; i--, j++)
		if (b[i] == '1')
			num += _pow(2, j);

	return (num / 2);

}
