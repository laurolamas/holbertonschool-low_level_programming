#include "main.h"
/**
 * reverse_array - strcmp
 *
 * @a: a
 * @n: n
 *
 * Return: Number
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0; i <= (n / 2) && a[i] != '\0'; i++)
	{
		aux = a[i];
		a[i] = a[((n - 1) - i)];
		a[((n - 1) - i)] = aux;
	}
}
