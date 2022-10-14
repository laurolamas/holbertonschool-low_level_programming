#include "main.h"

/**
 * factorial - factorial
 *
 * @n: n
 *
 * Return: factorial
 *
 */

int factorial(int n)
{
	if (n > 0)
	{
		if (n == 1)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
		return (-1);
}
