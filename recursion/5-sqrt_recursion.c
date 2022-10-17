#include "main.h"

/**
 * findsqr - sqr
 *
 * @n: n
 * @i: i
 *
 * Return: sqr root
 *
 */

int findsqr(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i == n)
		return (-1);

	else
		findsqr(n, ++i);
}

/**
 * _sqrt_recursion - sqr
 *
 * @n: n
 *
 * Return: sqr root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (findsqr(n, 1));

}
